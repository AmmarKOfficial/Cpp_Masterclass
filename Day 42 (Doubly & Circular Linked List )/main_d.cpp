// Doubly Linked List
// We add a pointer to the previous node in a doubly-linked list. Thus, we can go in either direction: forward or backward.

#include<iostream>
using namespace std;

struct Node
{
    public:
        int Data;
        Node *Next;
        Node *Prev;
};

int main(){
    /* Initialize nodes */

    Node* Head;
    Node* One = NULL;
    Node* Two = NULL;
    Node* Three = NULL;

    /* Allocate memory */
    One = new Node();
    Two = new Node();
    Three = new Node();

    /* Assign data values */
    One->Data = 10;
    Two->Data = 20;
    Three->Data = 30;

    /* Connect nodes */
    One->Next = Two;
    One->Prev = NULL;

    Two->Next = Three;
    Two->Prev = One;

    Three->Next= NULL;
    Three->Prev = Two;

    cout<<"Forward Mode "<<endl;
    /* Save address of first node in head Forward Move*/
    Head = One;
      while(Head!= NULL){
        cout<<"  "<<Head->Data;
        Head = Head->Next;
    }

    cout<<"Reverse Mode "<<endl;
    /* Save address of first node in head Reverse Move*/
    Head = Three;
      while(Head!= NULL){
        cout<<"  "<<Head->Data;
        Head = Head->Prev;
    }
    /* Print the values */
    return 0;
}