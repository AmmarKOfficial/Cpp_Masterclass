// A library charges a fine for every book returned late. For first 5 days the fine is 50 paise, for 6-10 days fine is one rupee and above 10 days fine is 5 rupees. 
// If you return the book after 30 days your membership will be cancelled. 
// Write a program to accept the number of days the member is late to return the book and display the fine or the appropriate message.

#include<iostream>
using namespace std;

int main(){
    int Days; //24
    cout << "Enter The Number Of Days You Are Late To Return Book: ";cin >> Days;

    float Cost;
    if(Days>=5){
        int Rem_Days = Days - 5; // 19
        float Amo_A = 5*.5; //2.5
        if(Rem_Days!= 0){
            if(Rem_Days >=5){ //19>5
                Rem_Days = Rem_Days - 5; //14
                int Amo_B = 5*1; // 5
                if(Rem_Days != 0){
                    int Amo_C = Rem_Days * 5;
                    Cost = Amo_A+Amo_B+Amo_C;
                }else{
                    Cost = Amo_A+Amo_B;
                }
            }else{
                int Amo_B = Rem_Days*1; // 5
                Cost = Amo_A + Amo_B;
            }
        }else{
            Cost = Amo_A;
        }
    }else{
        Cost = Days*.5;
    }
    cout<<"Your Total Cost Is : "<<Cost<<endl;

    if(Days > 30){
        cout<<"Your Memebership is Ended as You Promised to Return Books On Time, Tata"<<endl;
    }
    return 0;
}