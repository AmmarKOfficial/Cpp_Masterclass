// Shearh the given number using Binary Search Method {50,10,45,37,23,11,7,48,7,1,17,10} 

#include<iostream>
using namespace std;

void Search(int Arr[], int Size, int Value){
    int Start = 0;
    int End = Size;
    bool Match_Flag= false; 

    while (Start<=End)
    {
        int Middle = (Start+End)/2;

        if(Arr[Middle] == Value){
            cout<<"Your Value is Present at: "<<Middle<<endl;
            Match_Flag = true;
            return;
        }
        else if(Arr[Middle] > Value){
            End = Middle-1;
        }
        else{
            Start = Middle+1;
        }
    }

    if(!Match_Flag){
        cout<<"Sorry the Value you Entered is Not Present in The Array"<<endl;
    }

    return;
    
}

void Sorter(int Array[], int Size){
    int counter = 1;
    while(counter < Size){
        for(int i=0;i<Size-counter;i++){
            if(Array[i]>Array[i+1]){
                int Temp = Array[i];
                Array[i] = Array[i+1];
                Array[i+1] = Temp;
            }
        }
        counter++;
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

    Sorter(Array,Size);

    cout<<"Sorted Array:"<<endl;
    for(int i =0;i<Size;i++){
    cout<<" "<<Array[i];
        }
    cout<<endl;

    int Key;
    cout<<"Enter The Value You Want To Look For: ";cin>>Key;

    Search(Array,Size,Key);

    return 0;
}