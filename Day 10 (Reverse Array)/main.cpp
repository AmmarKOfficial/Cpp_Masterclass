// Write a program to copy the contents of one array into another in the reverse order.

#include<iostream>
#include<string>
using namespace std;

void Array_Modifier(int Arr[5][5]){
    cout<<"I'm In Modifier Function"<<endl;
    int Olti_Array[5][5];
    int x = 5;

    for(int i = 0;i<5;i++){
        int y = 5;
        for(int j=0;j<5;j++){      
            Olti_Array[x-1][y-1] = Arr[i][j];
            y--;
        }
        x--;
    }

    cout<<"Olti Array"<<endl;

    for(int i = 0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<"  "<<Olti_Array[i][j];
        }
        cout<<endl;
    }

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

    cout<<"I'm Back In Main"<<endl;

    for(int i = 0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<"  "<<Arr[i][j];
        }
        cout<<endl;
    }


    return 0;
}