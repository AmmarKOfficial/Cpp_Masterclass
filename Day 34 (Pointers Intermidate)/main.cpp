#include <iostream>
using namespace std;
// Pointer Variable that store adress of the veriables

void Increment_Val(int x){
x= x+1;
cout<<"Addres In Val: "<<&x<<endl;
}

void Increment_Ref(int *x){
*x = *x +1;
cout<<"Addres In Ref: "<<x<<endl;
}

int main() {
    //Pointers in Pointers
    // if pointer p is pointing to the addres of int a and i want to point to the address of pointer that is pointing to int a, how can i?
    // int x=5;
    // int *p =&x;
    // *p = 6;
    // int **q =&p;
    // int ***r =&q;
    
    // cout<<*p<<endl; //6
    // cout<<*q<<endl; //Value of Pointer
    // cout<<*(*q)<<endl; //6
    // cout<<*(*r)<<endl;
    // cout<<*(*(*r))<<endl;

    // ***r = 200;
    // cout<<"Value of X = "<<x<<endl;

    // **q =*p+50;
    // cout<<"Value of X = "<<x<<endl;

    //Real Life Use Case Call by Referencing 
    // Differencing Between Pass by Value and Referencing

    int x = 10;
    cout<<"Addres in Main: "<<&x<<endl;

    //By Value
    Increment_Val(x);
    cout<<"Interment value by Increment_Val : "<<x<<endl;

    //By Referencing

    Increment_Ref(&x);
    cout<<"Interment value by Increment_Ref: "<<x<<endl;

}


// Array With Pointers 

#include <iostream>
using namespace std;

void Arr_Func(int *Arr,int Size){
    int Sum = 0;
    for(int i=0;i<Size;i++){
        Sum+=Arr[i]; //A[i] = *(A+i)
    }
    cout<<"Sum Of Array: "<<Sum<<endl;
    
}


int main() {
    
    //In memory array values are in continues location we can add 1 in value to point to the next value of array
    // &A[i] or A+i Address
    // *A[i] or *(A+i)
    // First Addres is Also Called Base Address

    int A[] = {1,2,3,4,5,6};
    int i =3;

    // cout<<A+i<<endl;
    // cout<<&A[i]<<endl;
    // cout<<A[i]<<endl;
    // cout<<*(A+i)<<endl;

    // Array As Function Argument
    cout<<"Passed to Function : "<<endl;
    Arr_Func(A,6);

}