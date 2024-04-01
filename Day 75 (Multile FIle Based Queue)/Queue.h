#ifndef QUEUE_H
#define QUEUE_H

#define MAX_SIZE 100
#include <iostream>

class Queue {
private:
    int arr_queue[MAX_SIZE];
    int rear;
    int front;

public:
    Queue();
    void insert();
    int removeData();
    void display();
};

#endif
