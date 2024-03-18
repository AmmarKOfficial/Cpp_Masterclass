// Frequency of Characters in a String and Findout the 2 consecitive same alphabets

#include <iostream>
#include <string>
using namespace std;

int main() {
    string Alpha = "Wellcome to Coding Classes";
    cout << "Alpha String : " << Alpha << endl;
    int Length = Alpha.size(); 
    
    for(int i =65;i<=90;i++){
        char Val = static_cast<char>(i);
        int Counter = 0; 
        for(int j =0;j<Length;j++){
            if(Val == Alpha[j]){
                Counter++;
            }
        }
        if(Counter > 0){
            cout<<"The Frequency of "<<Val<<" is : "<<Counter<<endl;
        }
    }

    for(int i =97;i<=122;i++){
        char Val = static_cast<char>(i);
        int Counter = 0; 
        for(int j =0;j<Length;j++){
            if(Val == Alpha[j]){
                Counter++;
                if(Alpha[j]==Alpha[j-1]){
                    cout<<"The Alphabet "<<Val<< " is Consecitive in Occurance at : "<<j<<" & "<<j-1<<endl;
                }
            }
        }
        if(Counter > 0){
            cout<<"The Frequency of "<<Val<<" is : "<<Counter<<endl;
        }
    }

    return 0;
}