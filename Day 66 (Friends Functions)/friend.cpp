// C++ friend Function and friend Classes
// Data hiding is a fundamental concept of object-oriented programming. It restricts the access of private members from outside of the class.
// Similarly, protected members can only be accessed by derived classes and are inaccessible from outside. For example,

// class MyClass {
//     private:
//         int member1;
// }

// int main() {
//     MyClass obj;

//     // Error! Cannot access private members from here.
//     obj.member1 = 5;
// }

// C++ program to demonstrate the working of friend function

// #include <iostream>
// using namespace std;

// class Distance {
//     private:
//         int meter;
        
//         // friend function
//         friend int addFive(Distance);

//     public:
//         Distance() : meter(0) {}
        
// };

// // friend function definition
// int addFive(Distance d) {

//     //accessing private members from the friend function
//     d.meter += 5;
//     return d.meter;
// }

// int main() {
//     Distance D;
//     cout << "Distance: " << addFive(D);
//     return 0;
// }


// Friend of 2 Classes 

// Add members of two different classes using friend functions

#include <iostream>
using namespace std;

// forward declaration
class ClassB;

class ClassA {
    
    public:
        // constructor to initialize numA to 12
        ClassA() : numA(12) {}
        
    private:
        int numA;
        
         // friend function declaration
         friend int add(ClassA, ClassB);
};

class ClassB {

    public:
        // constructor to initialize numB to 1
        ClassB() : numB(1) {}
    
    private:
        int numB;
 
        // friend function declaration
        friend int add(ClassA, ClassB);
};

// access members of both classes
int add(ClassA objectA, ClassB objectB) {
    return (objectA.numA + objectB.numB);
}

int main() {
    ClassA objectA;
    ClassB objectB;
    cout << "Sum: " << add(objectA, objectB);
    return 0;
}