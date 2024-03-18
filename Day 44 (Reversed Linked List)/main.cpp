#include <iostream>
using namespace std;

class Node {
public:
    int Data;
    Node* Next;
};

Node* reverseLinkedList(Node* head) {
    Node *prev = nullptr, *current = head, *nextNode = nullptr;
    while (current != nullptr) {
        nextNode = current->Next; // Store the next node
        current->Next = prev; // Reverse the link
        prev = current; // Move pointers one position ahead
        current = nextNode;
    }
    return prev; // New head of the reversed list
}

int main() {
    Node* Head;
    Node* One = nullptr;
    Node* Two = nullptr;
    Node* Three = nullptr;

    One = new Node();
    Two = new Node();
    Three = new Node();

    One->Data = 10;
    Two->Data = 20;
    Three->Data = 30;

    One->Next = Two;
    Two->Next = Three;
    Three->Next = nullptr;

    cout << "Original Linked List:";
    Head = One;
    while (Head != nullptr) {
        cout << " " << Head->Data;
        Head = Head->Next;
    }

    // Reverse the linked list
    Head = reverseLinkedList(One);

    cout << "\nReversed Linked List:";
    while (Head != nullptr) {
        cout << " " << Head->Data;
        Head = Head->Next;
    }

    return 0;
}
