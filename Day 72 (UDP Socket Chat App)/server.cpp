#include <iostream>
#include <string>
#include <cstring>
#include <arpa/inet.h>
#include <unistd.h>

const int PORT = 88882;
const int BUFFER_SIZE = 1024;

int main() {
    struct sockaddr_in server_addr, client_addr;
    int sockfd, client_len, bytes_received;
    char buffer[BUFFER_SIZE];

    // Create UDP socket
    if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) == -1) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    // Fill server information
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);
    server_addr.sin_addr.s_addr = htonl(INADDR_ANY);

    // Bind the socket
    if (bind(sockfd, (struct sockaddr*)&server_addr, sizeof(server_addr)) == -1) {
        perror("Binding failed");
        exit(EXIT_FAILURE);
    }

    std::cout << "Server listening on port " << PORT << std::endl;

    while (true) {
        client_len = sizeof(client_addr);
        
        // Receive message from client
        bytes_received = recvfrom(sockfd, buffer, BUFFER_SIZE, 0, (struct sockaddr*)&client_addr, (socklen_t*)&client_len);
        if (bytes_received == -1) {
            perror("Error in receiving message");
            exit(EXIT_FAILURE);
        }
        buffer[bytes_received] = '\0'; // Null-terminate the received message

        // Print received message
        std::cout << "Client: " << buffer << std::endl;

        // Get response from the server
        std::cout << "Server: ";
        std::string response;
        std::getline(std::cin, response);

        // Send response back to client
        sendto(sockfd, response.c_str(), response.length(), 0, (struct sockaddr*)&client_addr, client_len);
    }

    close(sockfd);
    return 0;
}
