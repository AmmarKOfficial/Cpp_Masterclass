// Sort the given array using bubble sort {50,10,45,37,23,11,7,48,7,1,17,10} 

#include<iostream>
using namespace std;

int main(){
    int Array[] = {50,10,45,37,23,11,7,48,7,1,17,10};

    for(int i =0;i<12;i++){
        cout<<" "<<Array[i];
    }
    cout<<endl;


    int counter = 1;
    while(counter < 12){
        for(int i=0;i<12-counter;i++){
            if(Array[i]>Array[i+1]){
                int Temp = Array[i];
                Array[i] = Array[i+1];
                Array[i+1] = Temp;
            }
        }
        cout<<"Iteration No # "<<counter<<endl;
        for(int i =0;i<12;i++){
        cout<<" "<<Array[i];
         }
        cout<<endl;
        counter++;
    }
    return 0;
}