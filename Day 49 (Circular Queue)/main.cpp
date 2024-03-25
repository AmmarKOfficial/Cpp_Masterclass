// Circular Queue implementation in C++

#include <iostream>
#define SIZE 5 /* Size of Circular Queue */

using namespace std;

class Queue {
   private:
  int items[SIZE], front, rear;

   public:
  Queue() {
    front = -1;
    rear = -1;
  }
  // Check if the queue is full
  bool isFull() {
    if (front == 0 && rear == SIZE - 1) {
      return true;
    }
    if (front == rear + 1) {
      return true;
    }
    return false;
  }
  // Check if the queue is empty
  bool isEmpty() {
    if (front == -1)
      return true;
    else
      return false;
  }
  // Adding an element
  void enQueue(int element) {
    if (isFull()) {
      cout << "Queue is full";
    } else {
      if (front == -1) front = 0;
      rear = (rear + 1) % SIZE;
      items[rear] = element;
      cout << endl
         << "Inserted " << element << endl;
    }
  }
  // Removing an element
  int deQueue() {
    int element;
    if (isEmpty()) {
      cout << "Queue is empty" << endl;
      return (-1);
    } else {
      element = items[front];
      if (front == rear) {
        front = -1;
        rear = -1;
      }
      // Q has only one element,
      // so we reset the queue after deleting it.
      else {
        front = (front + 1) % SIZE;
      }
      return (element);
    }
  }

  void display() {
    // Function to display status of Circular Queue
    int i;
    if (isEmpty()) {
      cout << endl
         << "Empty Queue" << endl;
    } else {
      cout << "Front -> " << front;
      cout << endl
         << "Items -> ";
      for (i = front; i != rear; i = (i + 1) % SIZE)
            cout <<"    "<<items[i]; // For Previous Values
        cout <<"    "<< items[i];//For Current Inserted Value
        cout << endl
         << "Rear -> " << rear;
    }
  }
};

using namespace std;

// Assuming Queue and its operations are defined elsewhere

int main() {
    Queue q; // Assuming Queue is properly defined and initialized
    char choice;

    do {
        cout << "Enter Your Choice" << endl;
        cout << "A: Insert Element\nB: Extract Element\nD: Display\nX: Exit\n";
        cout<<"Please Enter : ";
        cin >> choice;

        switch (choice) {
            case 'A': {
                int num;
                cout << "Enter The Number To Fill in: ";
                cin >> num;
                q.enQueue(num);
                q.display();
                break;
            }
            case 'B': {
                int elem = q.deQueue();
                if (elem != -1)
                    cout << "Deleted Element is " << elem << endl;
                q.display();
                break;
            }
            case 'D': {
                q.display();
                break;
            }
            case 'X': {
                cout << "Exiting program." << endl;
                exit(0);
                break;
            }
            default: {
                cout << "Entered The Wrong Choice" << endl;
                break;
            }
        }
        cout<<"\n\n";
    } while (choice != 'X');

    return 0;
}
