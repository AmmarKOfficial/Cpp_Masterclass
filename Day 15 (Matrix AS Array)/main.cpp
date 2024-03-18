//  Addition/Subtractionof Two Matrixs

#include<iostream>
using namespace std;

void Array_Modifier(int Arr[5][5],int Brr[5][5],char Oper){
    int Add_Array [5][5];
    int Sub_Array [5][5];

    switch(Oper){
        case 'A':
            for(int i = 0;i<5;i++){
            for(int j=0;j<5;j++){
                Add_Array[i][j] = Arr[i][j]+Brr[i][j];
                }
            }

        cout<<"Added Arrays"<<endl;
        for(int i = 0;i<5;i++){
            for(int j=0;j<5;j++){
                cout<<" "<<Add_Array[i][j];
            }
            cout<<endl;
        }
        break;

        case 'S':
        for(int i = 0;i<5;i++){
        for(int j=0;j<5;j++){
            Sub_Array[i][j] = Arr[i][j]-Brr[i][j];
            }
        }

        cout<<"Subtracted Arrays"<<endl;
        for(int i = 0;i<5;i++){
            for(int j=0;j<5;j++){
                cout<<" "<<Sub_Array[i][j];
            }
            cout<<endl;
        }
        break;

        default:
        cout<<"Noting To Do"<<endl;
        }
   
}


int main(){

    int Arr[5][5] = {
        {3, 2, 5, 4, 15},
        {3, 2, 5, 4, 15},
        {3, 2, 5, 4, 15},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5}
    }; 

    int Brr[5][5] = {
        {3, 2, 5, 4, 15},
        {3, 2, 5, 4, 15},
        {3, 2, 5, 4, 15},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5}
    }; 


    char Oper;
    cout<<"What Do You Want to Do With These Arrays: \n A(Add) | S(Subtract) : ";cin>>Oper; 
    Array_Modifier(Arr,Brr,Oper);
    return 0;
}