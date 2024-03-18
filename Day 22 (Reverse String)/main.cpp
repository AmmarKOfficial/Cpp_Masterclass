// Reversing a String

#include <iostream>
#include <string>
using namespace std;

int main() {
    string Alpha = "Hello and Wellcome To The Bluetu Devs";
    cout << "Alpha String : " << Alpha << endl;
    int Length = Alpha.size(); 
    cout <<"Length of the string: "<< Length << endl;
    string Beta; 
    int Reverse_Pointer = Length - 1;
    for (int i = 0; i < Length; i++) {
        Beta += Alpha[Reverse_Pointer]; 
        Reverse_Pointer--;
    }
    cout << "Reversed String: " << Beta << endl;

    return 0;
}
