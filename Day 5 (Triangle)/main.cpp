// If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is isosceles, 
// equilateral, scalene or right angled triangle.

// If none of the sides of a triangle are equal (of equal length), the triangle is scalene. 
// If two or more of the triangles sides are equal, the triangle is isosceles. 
// If all three of the sides of a triangle are equal, it is equilateral. All equilateral triangles are also isosceles, 

#include <iostream>
using namespace std;

int main() {
    int Side_A, Side_B, Side_C;
    
    cout << "Please Enter the Measure of Angle A: ";cin >> Side_A;cout << endl;
    cout << "Please Enter the Measure of Angle B: ";cin >> Side_B;cout << endl;
    Side_C = 180 - (Side_A + Side_B);

    if (Side_A > 0 && Side_B > 0 && Side_C > 0) {
        if (Side_A == 90 || Side_B == 90 || Side_C == 90) {
            cout << "The triangle is a Right Angle Triangle." << endl;
        } else {
            cout << "The triangle is not a Right Angle Triangle." << endl;
        }

        if (Side_A == Side_B && Side_B == Side_C) {
            cout << "The triangle is an Equilateral triangle." << endl;
        } else if (Side_A == Side_B || Side_B == Side_C || Side_A == Side_C) {
            cout << "The triangle is an Isosceles triangle." << endl;
        } else {
            cout << "The triangle is a Scalene triangle." << endl;
        }
    } 
    else {
        cout << "Are you Comedy Me, Sum Of All Three Sides Should Be Equal To 180 (You Should Have Attented School" << endl;
    }

    return 0;
}
