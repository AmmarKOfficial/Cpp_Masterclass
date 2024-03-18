// What are array and how to input and output the array from user?

#include<iostream>
#include<string>
using namespace std;

int main(){

    int myNumbers[5] = {10, 20, 30, 40, 50}; // For Loop
    for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
    }

    for (int i : myNumbers) { // For Each Loop
    cout << i << "\n";
    }

    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"}; //String Array
    for (int i = 0; i < 5; i++) {
    cout << i << " = " << cars[i] << "\n";
    }

    cout<<sizeof(myNumbers)<<endl;
    int getArrayLength = sizeof(myNumbers) / sizeof(int);
    cout << getArrayLength<<endl;

    // 2D Arrays

    cout<<"2D Arrays"<<endl;

    int Arr[3][3]= {{1,2,3},{1,2,3},{1,2,3}};

    for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"  "<<Arr[i][j];
        }
        cout<<endl;
    }

    cout<<sizeof(Arr)/sizeof(int)<<endl;

    int Brr[3][3]= {};

    for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter The Number To Be Inserted at Position: "<< i << " " <<j<<" : ";cin>>Brr[i][j];
        }
        cout<<endl;
    }

    for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"  "<<Brr[i][j];
        }
        cout<<endl;
    }


    return 0;
}