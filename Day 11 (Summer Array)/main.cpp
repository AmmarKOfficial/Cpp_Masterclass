//  Sum/Square of All The Elements of an Array

#include<iostream>
using namespace std;

void Array_Modifier(int Arr[5][5]){

    int Summer = 0;
    long int Multi = 1;

    for(int i = 0;i<5;i++){
        for(int j=0;j<5;j++){      
            Summer += Arr[i][j];
            Multi = Multi*Arr[i][j];
        }
    }

    cout<<"Total Sum Of All The Elements in Array: "<<Summer<<endl;
    cout<<"Total Multiplicative Of All The Elements in Array: "<<Multi<<endl;

}

int main(){

    int Arr[5][5];

    // int Arr[5][5] = {
    //     {1, 2, 3, 4, 5},
    //     {1, 2, 3, 4, 5},
    //     {1, 2, 3, 4, 5},
    //     {1, 2, 3, 4, 5},
    //     {1, 2, 3, 4, 5}
    // }; 

    for(int i = 0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<"Enter The Number To Be Inserted at Position: "<< i << " " <<j<<" : ";cin>>Arr[i][j];
        }
        cout<<endl;
    }
    
    cout<<"Entered Array"<<endl;

    for(int i = 0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<"  "<<Arr[i][j];
        }
        cout<<endl;
    }

    Array_Modifier(Arr);

    return 0;
}