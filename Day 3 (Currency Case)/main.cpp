// A cashier has currency notes of denominations 10, 50 and 100. If the amount to be withdrawn is input through the keyboard in hundreds, 
// find the total number of currency notes of each denomination the cashier will have to give to the withdrawer.

#include<iostream>
using namespace std;

int main(){
    int Amount;
    cout<<"Please Enter The Amount to Be Paid in Humderds: ";cin>>Amount;
    int Hun = Amount / 100;
    int Fif = (Amount % 100)/50;
    int Ten = (Amount-((Hun*100)+(Fif*50)))/10;
    cout<<"You Have To Provide "<<Hun<<" Notes of Hundreds "<<endl;
    cout<<"You Have To Provide "<<Fif<<" Notes of Fifties "<<endl;
    cout<<"You Have To Provide "<<Ten<<" Notes of Tens "<<endl;
    int Remaining = ((Amount % 100)%10);
    cout<<"Total Remaining Amount: "<<Remaining<<endl;
    return 0;
}