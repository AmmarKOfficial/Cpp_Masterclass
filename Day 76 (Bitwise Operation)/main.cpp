// & Bitwise AND Operator			
// | Bitwise OR Operator
// ^ Bitwise XOR Operator			
// ~ Bitwise Complement Operator
// << Bitwise Shift Left Operator			
// >> Bitwise Shift Right Operator

#include <iostream>
using namespace std;

int main() {
    // declare variables
    int a = 12, b = 25; // 12 = 00001100 (In Binary) | 25 = 00011001 (In Binary)

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;


    // Complement 

    // 36 = 00100100 (In Binary)
    // 1's Complement = 11011011 
    // 2's Complement :   
    // 11011011
    // +     1
    // _________
    // 11011100 
    // The bitwise complement of 35 = - (35 + 1) = -36
    // i.e. ~35 = -36

    int num1 = 35;
    int num2 = -150;
    cout << "~(" << num1 << ") = " << (~num1) << endl;
    cout << "~(" << num2 << ") = " << (~num2) << endl;


    //Shhifting Operations
    // declaring two integer variables
    int num = 212, i;

    // Shift Right Operation
    cout << "Shift Right:" << endl;

    // Using for loop for shifting num right from 0 bit to 3 bits 
    for (i = 0; i < 4; i++) {
        cout << "212 >> " << i << " = " << (212 >> i) << endl;
    }

    // Shift Left Operation
    cout << "\nShift Left:" << endl;

    // Using for loop for shifting num left from 0 bit to 3 bits
    for (i = 0; i < 4; i++) {
        cout << "212 << " << i << " = " << (212 << i) << endl;
    }
    
    return 0;
}