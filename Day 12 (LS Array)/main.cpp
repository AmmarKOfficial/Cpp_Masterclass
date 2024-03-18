// Largest/Smallest Element in an Array


#include<iostream>
#include<string>
using namespace std;

void Array_Modifier(int Arr[5][5]){
    int Smallest = Arr[0][0];
    int Largest = Arr[0][0];

    for(int i = 0;i<5;i++){
        for(int j=0;j<5;j++){      
         int Val = Arr[i][j];
         if(Val<Smallest){
            Smallest = Val;
         }
         if (Val>Largest){
            Largest = Val;
         }
        }
    }

    cout<<"Smallest Value In Provided Array : "<<Smallest<<endl;
    cout<<"Largest Value In Provided Array : "<<Largest<<endl;


}


int main(){

    int Arr[5][5];

    for(int i = 0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<"Enter The Number To Be Inserted at Position: "<< i << " " <<j<<" : ";cin>>Arr[i][j];
        }
        cout<<endl;
    }
    cout<<"Orignal Provides Array"<<endl;

    for(int i = 0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<"  "<<Arr[i][j];
        }
        cout<<endl;
    }

    Array_Modifier(Arr);
    return 0;
}