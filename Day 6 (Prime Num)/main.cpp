// Print all the prime number between provided Range

#include<iostream>
using namespace std;

int main(){
    int Number;
    cout<<"Enter the Max Number of Range: ";cin>>Number;
    cout<<"The Prime Numbers : "<<endl;


    for(int i=0;i<Number;i++){
        bool Flag = false;
        if(i <= 2){
            continue;
        }
        for(int j = 2;j<i;j++){
        if(i%j == 0){
            Flag=true;
            break;     
        }
        } 
        if(!Flag){
            cout<< i <<" ";
        }
    
    }
    cout<<endl;
    return 0;
}