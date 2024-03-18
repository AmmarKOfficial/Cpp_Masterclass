// Sort the given array using insertion sort {50,10,45,37,23,11,7,48,7,1,17,10} 

#include<iostream>
using namespace std;

int main(){
    int Array[] = {50,10,45,37,23,11,7,48,7,1,17,10};

    cout<<"Initial Array: "<<endl;
    for(int i =0;i<12;i++){
        cout<<" "<<Array[i];
    }
    cout<<endl;

    cout<<"Sorting Array: "<<endl;
    for(int i =0;i<12;i++){
        int Current=Array[i];
        int Previous = i-1;
        while(Array[Previous]>Current && Previous>=0){
            Array[Previous+1] = Array[Previous];
            Previous--;
        }
        Array[Previous+1] = Current;

        cout<<"For Iteration: "<<i<<": "<<endl;
        for(int i =0;i<12;i++){
        cout<<" "<<Array[i];
        }
        cout<<endl;
    }

    cout<<"Sorted Array: "<<endl;
     for(int i =0;i<12;i++){
        cout<<" "<<Array[i];
        }
        cout<<endl;
    }