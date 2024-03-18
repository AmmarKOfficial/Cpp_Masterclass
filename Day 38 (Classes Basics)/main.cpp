// Objects and classes are used to wrap related functions and data in one place in C++.
// Suppose we need to store the length, breadth, and height of a rectangular room and calculate its area and volume.
// To handle this task, we can create three variables, say, length, breadth, and height, along with the functions calculateArea() and calculateVolume().
// However, in C++, rather than creating separate variables and functions, 
// we can also wrap the related data and functions in a single place (by creating objects).

// C++ Class

// A class is a blueprint for the object.
// We can think of a class as a sketch (prototype) of a house.
// It contains all the details about the floors, doors, windows, etc - we build the house based on these descriptions.
// The house is the object.


// How to create a class ???
// class className {
//    // some data
//    // some functions
// };

// #include<iostream>
// using namespace std;

// class Room {
//     public:
//         double length;
//         double breadth;
//         double height;   

//         double calculateArea(){   
//             return length * breadth;
//         }

//         double calculateVolume();
// };

// double Room::calculateVolume(){   
//             return length * breadth * height;
//     }

// int main() {

//     // create object of Room class
//     Room room1;

//     // assign values to data members
//     room1.length = 42.5;
//     room1.breadth = 30.8;
//     room1.height = 19.2;

//     // calculate and display the area and volume of the room
//     cout << "Area of Room =  " << room1.calculateArea() << endl;
//     cout << "Volume of Room =  " << room1.calculateVolume() << endl;

//     return 0;
// }

// Program to illustrate the working of
// public and private in C++ Class

#include <iostream>
using namespace std;

class Room {

   private:
    double length;
    double breadth;
    double height;

   public:

    // function to initialize private variables
    void initData(double len, double brth, double hgt) {
        length = len;
        breadth = brth;
        height = hgt;
    }

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {

    // create object of Room class
    Room room1;

    // pass the values of private variables as arguments
    room1.initData(42.5, 30.8, 19.2);

    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}