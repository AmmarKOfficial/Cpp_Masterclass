// Circular Linked List
// A circular linked list is a variation of a linked list in which the last element is linked to the first element. This forms a circular loop.

#include<iostream>
using namespace std;

struct Node
{
    public:
        int Data;
        Node *Next;
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
    Two->Next = Three;
    Three->Next= One;

    cout<<"Forward Mode "<<endl;
    /* Save address of first node in head Forward Move*/
    Head = One;
    int i=0;
      while(Head!= NULL && i<100){
        cout<<"  "<<Head->Data;
        Head = Head->Next;
        i++;
    }

    /* Print the values */
    return 0;
}