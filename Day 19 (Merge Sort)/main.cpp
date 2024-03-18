// Sort the given array using Merge sort {50,10,45,37,23,11,7,48,7,1,17,10} 

#include<iostream>
using namespace std;

void Merge_Sortter(int Arr[],int Left, int Mid, int Right){
    int X1 = Mid-Left+1;
    int X2 = Right-Mid;

    int Temp1[X1]; //For Left Side
    int Temp2[X2]; //For Right Side 

    for(int i =0 ; i<X1 ; i++){
        Temp1[i] = Arr[Left+i];
    }

    for(int i =0 ; i<X2 ; i++){
        Temp2[i] = Arr[Mid+1+i];
    }

    //merging Left And Right Into Main Array
    int i = 0; // Position Pointing in Left Array
    int j = 0; // Position Pointing in Right Array
    int k = Left; // Position Pointing in Main Array

    while(i<X1 && j<X2){
        if(Temp1[i]<Temp2[j]){
            Arr[k] = Temp1[i];
            k++; i++;
        }else{
            Arr[k]=Temp2[j];
            k++; j++;
        }
    }

    //To Push The Pointing Bars Till End
    while(i<X1){
        Arr[k] = Temp1[i];
            k++; i++;
    }

    while(j<X2){
        Arr[k]=Temp2[j];
            k++; j++;
    }
}

void Splitter(int A[],int P_Left, int P_Right){
    if(P_Left < P_Right){
        int Middle  = (P_Left+P_Right)/2;
        Splitter(A,P_Left,Middle);
        Splitter(A,Middle+1,P_Right);

        Merge_Sortter(A, P_Left,Middle,P_Right);
    }
}

int main(){
    int Array[] = {50,10,45,37,23,11,7,48,7,1,17,10};

    cout<<"Initial Array: "<<endl;
    for(int i =0;i<12;i++){
        cout<<" "<<Array[i];
    }
    cout<<endl;

    Splitter(Array,0,11);

    cout<<"Sorted  Array: "<<endl;
    for(int i =0;i<12;i++){
        cout<<" "<<Array[i];
    }

    cout<<endl;
}