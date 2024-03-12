// If the marks obtained by a student in five different subjects are input through the keyboard, 
// find out the aggregate marks and percentage marks obtained by the student. 
// Assume that the maximum marks that can be obtained by a student in each subject is 100.

#include<iostream>
using namespace std;

float Avenger(int Eng, int Phy, int Math, int Chem, int Comp) {
    int Sum_Obtained = Eng + Phy + Math + Chem + Comp;
    float result = (static_cast<float>(Sum_Obtained) / 500) * 100; 
    return result;
}

int main(){
    int Eng,Phy,Math,Chem,Comp;
    cout<<"Please Enter The Obtained Marks in English: ";cin>>Eng;
    cout<<"Please Enter The Obtained Marks in Physics: ";cin>>Phy;
    cout<<"Please Enter The Obtained Marks in Maths: ";cin>>Math;
    cout<<"Please Enter The Obtained Marks in Chemisttry: ";cin>>Chem;
    cout<<"Please Enter The Obtained Marks in Computer: ";cin>>Comp;

    float Obt_Percent = Avenger(Eng,Phy,Math,Chem,Comp);

    cout<<"\n 😂😂 Wallah You Got Total Of "<<Obt_Percent<<" %"<<endl;

    return 0;
}