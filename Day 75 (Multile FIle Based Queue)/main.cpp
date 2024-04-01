#include <iostream>
#include "Queue.h"

int main() {
    Queue queue;
    int choice, data;

    while (1) {
        std::cout << "1. Insert Element" << std::endl;
        std::cout << "2. Delete Element" << std::endl;
        std::cout << "3. Display Queue" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                queue.insert();
                break;
            case 2:
                data = queue.removeData();
                if (data != -1)
                    std::cout << "Removed element is: " << data << std::endl;
                break;
            case 3:
                queue.display();
                break;
            case 4:
                return 0;
            default:
                std::cout << "Invalid choice" << std::endl;
        }
    }

    return 0;
}
