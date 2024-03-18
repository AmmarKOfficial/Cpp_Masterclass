// How to pass array from one function to the other?

#include<iostream>
#include<string>
using namespace std;

void Array_Operation(int Brr[],int Len){
    cout<<"In Array_Operation Function"<<endl;

    // When you pass an array to a function, it decays into a pointer to its first element. 
    // So, sizeof(Brr) inside the Array_Operation function will give you the size of a pointer, not the size of the array.
    int Ben = sizeof(Brr); 
    cout<<"The Total Size of Array Ben is : "<<Ben<<endl;

    for(int i = 0;i<Len;i++){
        Brr[i] = Brr[i]*2;
    }

    cout<<"Going back to main"<<endl;
}

void Array_Operation_2D(int Brr[3][3]){
    cout<<"I'm In Secodary Function ";

    for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            Brr[i][j] = Brr[i][j]*10;
        }
        cout<<endl;
    }

    cout<<"Returning to main......"<<endl;

}

int main(){
    
    // int Arr[10] = {1,2,3,4,5,6,7,8,9,0};
    // int Len = sizeof(Arr)/sizeof(int);
    // cout<<"The Total Size of Array is : "<<Len<<endl;
    // for (int i=0;i<Len;i++) {
    // cout << Arr[i] << "  ";
    // }
    // cout<<endl;

    // Array_Operation(Arr,Len);

    // for (int i=0;i<Len;i++) {
    // cout << Arr[i] << "  ";
    // }
    // cout<<endl;

    ///////////////////////////2D Zone//////////////////////////////

    int Arr[3][3]= {{1,2,3},{1,2,3},{1,2,3}};

    for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"  "<<Arr[i][j];
        }
        cout<<endl;
    }

    Array_Operation_2D(Arr);

    for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"  "<<Arr[i][j];
        }
        cout<<endl;
    }

    return 0;
}
