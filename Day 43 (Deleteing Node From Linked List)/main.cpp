#include<iostream>
using namespace std;

struct Node
{
  public:
    int Data;
    Node *Next;
};

int Find_length(Node* head)
{
    Node* temp = head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->Next;
    }
    return count;
}

void deleteNode(Node*& head, int valueToDelete)
{
    Node* temp = head;
    cout<<"Head Value: "<<head;
    Node* prev = NULL;

    // Traverse the list to find the node with the given value
    while (temp != NULL && temp->Data != valueToDelete) {
        prev = temp;
        temp = temp->Next;
    }

    // If the node with the given value is found
    if (temp != NULL) {
        // Adjust pointers to bypass the node to be deleted
        if (prev != NULL) {
            prev->Next = temp->Next;
        } else {
            head = temp->Next;
        }
        // Deallocate memory for the deleted node
        delete temp;
    } else {
        cout << "Node with value " << valueToDelete << " not found in the list." << endl;
    }
}

int main(){
    //Initialization of Nodes
    Node* Head;
    Node* One = NULL;
    Node* temp = NULL; // Temp pointer for traversing the list

    //Allocate Memory
    One = new Node();

    //Assign Values
    One->Data = 10;

    // Connect Nodes
    Head = One;
    temp = One; // Point temp to the first node
    for (int i = 1; i < 10; ++i) { // Loop to create 9 more nodes
        Node* newNode = new Node();
        newNode->Data = (i + 1) * 10; // Data values are multiples of 10
        temp->Next = newNode; // Link the new node to the list
        temp = newNode; // Move temp to the newly added node
    }
    temp->Next = NULL; // Mark the end of the list

    //Print The Linked List Values
    temp = Head; // Reset temp to the beginning of the list
    while(temp != NULL) {
        cout << "  " << temp->Data;
        temp = temp->Next;
    }

    // Test the deleteNode function
    int valueToDelete;
    cout << "\nEnter the value to delete from the list: ";
    cin >> valueToDelete;
    deleteNode(Head, valueToDelete);

    //Print The Linked List Values after deletion
    temp = Head; // Reset temp to the beginning of the list
    cout << "\nLinked List after deletion:";
    while(temp != NULL) {
        cout << "  " << temp->Data;
        temp = temp->Next;
    }

    int Length = Find_length(Head); // Pass the original Head pointer
    cout << "\n The Length Of List is : " << Length;

    return 0;
}
