// Structures (also called structs) are a way to group several related variables into one place.
// Each variable in the structure is known as a member of the structure.

// To create a structure, use the struct keyword and declare each of its members inside curly braces.

#include<iostream>
#include<string>
using namespace std;

// Un Named Data Structures

// struct {
//     int Number;
//     string Color;
//     bool New;
// } Car1,Car2,Car3;

// int main(){
//     Car1.Color="White";
//     Car1.New=true;
//     Car1.Number = 5972;

//     Car2.Color="White";
//     Car2.New=true;
//     Car2.Number = 5972;

//     Car3.Color="White";
//     Car3.New=true;
//     Car3.Number = 5972;
//     return 0;
// }


struct Car{
    string brand;
    string model;
    int year;
};

int main(){

// Create a car structure and store it in myCar1;
  Car myCar1;
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.year = 1999;

  // Create another car structure and store it in myCar2;
  Car myCar2;
  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar2.year = 1969;
 
  // Print the structure members
  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
    return 0;
}