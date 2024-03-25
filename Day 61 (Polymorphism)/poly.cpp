// C++ Polymorphism
// Polymorphism is an important concept of object-oriented programming. It simply means more than one form. That is, the same entity (function or operator) behaves differently in different scenarios. For example,

// The + operator in C++ is used to perform two specific functions. When it is used with numbers (integers and floating-point numbers), it performs addition.

// int a = 5;
// int b = 6;
// int sum = a + b;    // sum = 11

// And when we use the + operator with strings, it performs string concatenation. For example,

// string firstName = "abc ";
// string lastName = "xyz";

// // name = "abc xyz"
// string name = firstName + lastName;

// We can implement polymorphism in C++ using the following ways:

//     Function overloading: Compile-time polymorphism
//     Operator overloading: Compile-time polymorphism.
//     Function overriding: Runtime polymorphism
//     Virtual functions: Runtime polymorphism.


// C++ Function Overloading
// In C++, we can use two functions having the same name if they have different parameters (either types or number of arguments).

// C++ program to overload sum() function

// #include <iostream>
// using namespace std;

// // Function with 2 int parameters
// int sum(int num1, int num2) {
//     return num1 + num2;
// }

// // Function with 2 double parameters
// double sum(double num1, double num2) {
//     return num1 + num2;
// }

// // Function with 3 int parameters
// int sum(int num1, int num2, int num3) {
//     return num1 + num2 + num3;
// }

// int main() {
//     // Call function with 2 int parameters
//     cout << "Sum 1 = " << sum(5, 6) << endl;

//     // Call function with 2 double parameters
//     cout << "Sum 2 = " << sum(5.5, 6.6) << endl;

//     // Call function with 3 int parameters
//     cout << "Sum 3 = " << sum(5, 6, 7) << endl;

//     return 0;
// }

// C++ Virtual Functions

// In C++, we may not be able to override functions if we use a pointer of the base class to point to an object of the derived class.
// Using virtual functions in the base class ensures that the function can be overridden in these cases.

// C++ program to demonstrate the use of virtual functions

#include <iostream>
using namespace std;

class Base {
   public:
    virtual void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived derived1;

    // pointer of Base type that points to derived1
    Base* base1 = &derived1;

    // calls member function of Derived class
    base1->print();

    return 0;
}
