// Checking Palindrome Strings

#include <iostream>
#include <string>
using namespace std;

int main() {
    string Alpha = "Madam";
    cout << "Alpha String : " << Alpha << endl;
    int Length = Alpha.size(); 
    cout <<"Length of the string: "<< Length << endl;
    string Beta; 
    int Reverse_Pointer = Length - 1;
    for (int i = 0; i < Length; i++) {
        Beta += Alpha[Reverse_Pointer]; 
        Reverse_Pointer--;
    }

    cout << "Beta String : " << Beta << endl;
    
    if(Alpha == Beta){
        cout<<"The Given String is Palindrome"<<endl;
    }else{
        cout<<"The Given String is Not Palindrome"<<endl;
    }

    return 0;
}
