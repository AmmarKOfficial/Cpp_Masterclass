#include<iostream>
using namespace std;

int Factorial(int Num){
    if(Num > 1){
        return Num * Factorial(Num-1); // ((10 * 9) * 8) * 7 ...
    }else{
        return 1;
    }
}


int main(){
    int Number = 10;
    int Ans;
    Ans = Factorial(Number);
    cout<<"Factorial of Given Number :"<<Ans<<endl;
    return 0;
}