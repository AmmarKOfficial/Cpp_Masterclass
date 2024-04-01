#include "Queue.h"

Queue::Queue() {
    rear = -1;
    front = -1;
}

void Queue::insert() {
    int data;
    if (rear == MAX_SIZE - 1)
        std::cout << "Queue Overflow" << std::endl;
    else {
        if (front == -1)
            front = 0;
        std::cout << "Enter the element to be inserted: ";
        std::cin >> data;
        rear++;
        arr_queue[rear] = data;
    }
}

int Queue::removeData() {
    int data;
    if (front == -1 || front > rear) {
        std::cout << "Queue Underflow" << std::endl;
        return -1;
    } else {
        data = arr_queue[front];
        front++;
        return data;
    }
}

void Queue::display() {
    if (front == -1)
        std::cout << "Queue is empty" << std::endl;
    else {
        std::cout << "Queue elements are: ";
        for (int i = front; i <= rear; i++)
            std::cout << arr_queue[i] << " ";
        std::cout << std::endl;
    }
}
