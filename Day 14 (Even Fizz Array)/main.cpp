//  Even/Odd identification in Array // Fizz Buzz Challenge
// Part1 -> Modify Orignal Array So That If Number is Even Replace By 1 Else 0
// Part2 -> If Number is Divisible by 3 Cout Fizz, If By 5 then Buzz, If By Both then FizzBuzz else the Number Itself.  

#include<iostream>
using namespace std;

void Array_Modifier_EvenOdd(int Arr[5][5]){
    cout<<"Im in Odd Even Function"<<endl;
    for(int i = 0;i<5;i++){
        for(int j=0;j<5;j++){
            int Val = Arr[i][j];  

            if(Val % 2 == 0){
                Arr[i][j] = 1;
            }else{
                Arr[i][j] = 0;
            }
        }
    }

    for(int i = 0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<"  "<<Arr[i][j];
        }
        cout<<endl;
    }

}

void Array_Modifier_FizzBuzz(int Arr[5][5]){
    cout<<"Im in FizzBuzz Function"<<endl;
    for(int i = 0;i<5;i++){
        for(int j=0;j<5;j++){
            int Val = Arr[i][j];  

            if(Val % 3 == 0){
                if(Val % 5 ==0){
                    cout<<"FizzBuzz"<<" ";
                }else{
                    cout<<"Fizz"<<" ";
                }
            }else if(Val % 5 == 0){
                cout<<"Buzz"<<"  ";
            }else{
                cout<<Val<<"  ";
            }
        }
        cout<<endl;
    }
}





int main(){

    // int Arr[5][5];

    int Arr[5][5] = {
        {3, 2, 5, 4, 15},
        {3, 2, 5, 4, 15},
        {3, 2, 5, 4, 15},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5}
    }; 

    // for(int i = 0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         cout<<"Enter The Number To Be Inserted at Position: "<< i << " " <<j<<" : ";cin>>Arr[i][j];
    //     }
    //     cout<<endl;
    // }

    cout<<"Orignal Array"<<endl;

    for(int i = 0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<"  "<<Arr[i][j];
        }
        cout<<endl;
    }
    

    Array_Modifier_FizzBuzz(Arr);

    Array_Modifier_EvenOdd(Arr);
    return 0;
}