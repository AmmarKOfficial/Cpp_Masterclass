// If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. (Hint: Use the modulus operator ‘%’) 

#include<iostream>
using namespace std;

int main(){
    int Inpu;
    cout<<"Please Enter The Number to Test : ";cin>>Inpu;
    int Inpu1,Inpu2,Inpu3,Inpu4,Inpu5;
    Inpu1 = (Inpu / 10000);
    if(Inpu1>0 && Inpu1 <=9){
        Inpu2 = (Inpu % 10000)/1000;
        Inpu3 = ((Inpu % 10000)%1000)/100;
        Inpu4 = (((Inpu % 10000)%1000)%100)/10;
        Inpu5 = ((((Inpu % 10000)%1000)%100)%10);
        cout<<Inpu1<<" "<<Inpu2<<" "<<Inpu3<<" "<<Inpu4<<" "<<Inpu5<<endl;
        int summer = Inpu1 + Inpu2 + Inpu3 + Inpu4 + Inpu5;
        cout<<"The Total Sum Of The Digits Individually is : "<<summer<<endl;
    }
    else{
        cout<<"What The Heck, You Have To Enter 5 Digit Number Bro !!!!!!!!"<<endl;
    }
    return 0;
}