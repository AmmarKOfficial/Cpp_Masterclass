//  Find out All The Possible Multiplicative Factors Upto Given Number

#include<iostream>
using namespace std;

int main(){
    int Number;
    cout<<"Enter Any Number You Want To Find Factors of: ";cin>>Number;
    for(int z=0;z<=Number;z++){
        int Num = z; 
        cout<<"For Number : "<< Num <<" Factors are: ";
        for(int i = 0;i<=z;i++){
        for(int j=i;j<=z-1;j++){
            if(i*j == Num){
                cout<<"  "<<i<<" * "<<j ;
            }
        }
    }
    cout<<endl;
    }
    return 0;
}