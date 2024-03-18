#include <iostream>
using namespace std;
// Pointer Variable that store adress of the veriables

int main() {
    // int a; //Interger
    // int *p; //Pointer to Interger
    
    // char c; //Character 
    // char *p0; //Pointer To Charachter

    // double d; //Double
    // double *p1; //Pointer to double

    // p = &a; // P pointer will point to the addres of a
    // a=8;
    // cout<<"Value of A : "<<*p<<endl; // *(pointer) point to value of pointer veriable

    // p0= &c; // Pointer pointer d
    // p1= &d; // Pointer pointer d

    // // Guess Game
    // cout<<p<<endl;//---?
    // cout<<*p<<endl;//---?
    // cout<<&a<<endl;//---?

    // // Modify the value of a using its pointer
    // *p = 10; //Concept of Derefrencing
    // // Guess Game
    // cout<<p<<endl;//---?
    // cout<<*p<<endl;//---?
    // cout<<&a<<endl;//---?

    // //Test    
    // int b =100;
    // *p = b;
    // cout<<*p<<endl;
    // cout<<a<<endl;
    // cout<<p<<endl;
    
    // // Pointer Arthematic
    
    // int a = 10;
    // int *p;
    // p=&a;
    // cout<<p<<endl;
    // cout<<p+1<<endl; // Will increment 4 bytes as a is int 
    // //Check Values (Dangerous Zone No Boundry)
    // cout<<*p<<endl;
    // cout<<*(p+1)<<endl; // Will increment 4 bytes as a is int 
 
    /////////////////////// Zone 2 //////////////////
    
// int pointer can only store addres of interget --- Why ? Because we have to derefrencig and int shoud be dereference as int
    int a =1025;
    int *p;
    p = &a;
    cout<<"Address: "<<p<<" Value : "<<*p<<endl;  
    char *p0;
    p0 = (char*)p; 
    cout<<"Address: "<<p0<<" Value : "<<*p0<<endl;  // Cant map Int on Char
    // generaic pointer void *p0
    void *p1;
    p1=p;
    cout<<"Addres:"<<p1;
}