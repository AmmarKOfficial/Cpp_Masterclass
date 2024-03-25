#include <iostream>
#include <string>
#include <cstring>
#include <arpa/inet.h>
#include <unistd.h>

const int PORT = 88882;
const int BUFFER_SIZE = 1024;

int main() {
    struct sockaddr_in server_addr;
    int sockfd;
    char buffer[BUFFER_SIZE];
    std::string message;

    // Create UDP socket
    if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) == -1) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    // Fill server information
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);
    server_addr.sin_addr.s_addr = inet_addr("127.0.0.1"); // Server IP address

    while (true) {
        std::cout << "You: ";
        std::getline(std::cin, message);

        // Send message to server
        sendto(sockfd, message.c_str(), message.length(), 0, (struct sockaddr*)&server_addr, sizeof(server_addr));

        // Receive response from server
        int bytes_received = recvfrom(sockfd, buffer, BUFFER_SIZE, 0, NULL, NULL);
        if (bytes_received == -1) {
            perror("Error in receiving response from server");
            exit(EXIT_FAILURE);
        }
        buffer[bytes_received] = '\0'; // Null-terminate the received message

        // Print server's response
        std::cout << "Server: " << buffer << std::endl;
    }

    close(sockfd);
    return 0;
}
