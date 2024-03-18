// Finding Frequeny Of Each Value in an Character/Int Array

#include<iostream>
#include<string>
using namespace std;

void Array_Modifier_Char(char Arr[5][5]){

    //For Caps Letters
    for(int i= 65;i<=90;i++){
        int Counter = 0;
        char Val = static_cast<char>(i);
        for(int j=0;j<5;j++){
            for(int k=0;k<5;k++){
                if(Arr[j][k]==Val){
                    Counter++;
                }
            }
        }
        if(Counter>0){
            cout<<"Checking Frequency Of "<< Val<<" is : "<<Counter<<endl;
        }
    }

    //For Smalls Letters
    for(int i= 97;i<=122;i++){
        int Counter = 0;
        char Val = static_cast<char>(i);
        for(int j=0;j<5;j++){
            for(int k=0;k<5;k++){
                if(Arr[j][k]==Val){
                    Counter++;
                }
            }
        }
        if(Counter>0){
            cout<<"Checking Frequency Of "<< Val<<" is : "<<Counter<<endl;
        }
    }
}


void Array_Modifier_Int(int Arr[5][5]) {
    int freq[10] = {0}; 

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            freq[Arr[i][j]]++;
        }
    }

    for(int i = 0; i < 10; i++) {
        if(freq[i] > 0) {
            cout << "Frequency of " << i << " is: " << freq[i] << endl;
        }
    }
}

int main(){

    char Arr[5][5] = {
        {'A', 'b', 'C', 'd', 'E'},
        {'A', 'b', 'C', 'd', 'E'},
        {'A', 'b', 'C', 'd', 'E'},
        {'A', 'b', 'C', 'd', 'E'},
        {'A', 'b', 'C', 'd', 'E'}
    };

    int Irr[5][5] = {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5}
    };

    // for(int i = 0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         cout<<"Enter The Number To Be Inserted at Position: "<< i << " " <<j<<" : ";cin>>Arr[i][j];
    //     }
    //     cout<<endl;
    // }
    // cout<<"Orignal Provides Array"<<endl;

    // for(int i = 0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         cout<<"  "<<Arr[i][j];
    //     }
    //     cout<<endl;
    // }

    // Array_Modifier_Char(Arr);

    Array_Modifier_Int(Irr);
    return 0;
}