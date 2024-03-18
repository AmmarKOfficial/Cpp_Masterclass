// Shearh the given number using Linear Search Method {50,10,45,37,23,11,7,48,7,1,17,10} 

#include<iostream>
using namespace std;

void Search(int Arr[], int Size, int Value){
    bool Match_flag = false;
    for(int i =0; i<Size;i++){
        if(Arr[i] == Value){
            cout<<"Value is Found At Index: "<<i<<endl;
            Match_flag =true;
        }
    }
    if(!Match_flag){
        cout<<"The Value You Entered is Not Available in The Array 😔😔 "<<endl;
    }
}

int main(){
    int Array[] = {50,10,45,37,23,11,7,48,7,1,17,10};

    cout<<"Initial Array: "<<endl;
    for(int i =0;i<12;i++){
        cout<<" "<<Array[i];
    }
    cout<<endl;
    
    int Size = sizeof(Array)/sizeof(Array[0]);

    int Key;
    cout<<"Enter The Value You Want To Look For: ";cin>>Key;

    Search(Array,Size,Key);

    return 0;
}