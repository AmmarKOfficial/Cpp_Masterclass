// A linked list is a linear data structure that includes a series of connected nodes. Here, each node stores the data and the address of the next node.

// You have to start somewhere, so we give the address of the first node a special name called HEAD. Also, the last node in the linked list can be identified because its next portion points to NULL.
// Linked lists can be of multiple types: singly, doubly, and circular linked list. 

#include<iostream>
using namespace std;

struct Node
{
  public:
    int Data;
    Node *Next;
};


int main(){
    //Initialization of Nodes
    Node* Head;
    Node* One = NULL;
    Node* Two = NULL;
    Node* Three = NULL;

    //Allocate Memory
    One = new Node();
    Two = new Node();
    Three = new Node();

    //Assign Values
    One->Data = 10;
    Two->Data = 20;
    Three->Data = 30;

    // Connect Nodes
    One->Next = Two;
    Two->Next = Three;
    Three->Next = NULL;

    //Print The Linked List Values
    Head = One;

    while(Head!= NULL){
        cout<<"  "<<Head->Data;
        Head = Head->Next;
    }

    cout<<"\n Let's Add User Defined Node: ";

    char Choice = 'Y';
    if(Choice == 'Y' || Choice == 'y'){
        Node *New_Node = NULL;
        New_Node = new Node();
        int UData;
        cout<<"Enter Data : ";cin>>UData;
        New_Node->Data = UData;
        New_Node->Next = NULL;
        Three->Next = New_Node;
    }

    //Print The Linked List Values
    Head = One;
    cout<<"\n User Added The Node "<<endl;
    while(Head!= NULL){
        cout<<"  "<<Head->Data;
        Head = Head->Next;
    }

    return 0;
}

