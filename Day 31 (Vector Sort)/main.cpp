#include<iostream>
#include <vector>
using namespace std;

void Sort(vector<int> Vector){
    int Size = Vector.size();
    // Sort Area

    int counter = 1;
    while(counter < Size){
        for(int i=0;i<Size-counter;i++){
            if(Vector[i]>Vector[i+1]){
                int Temp = Vector[i];
                Vector[i] = Vector[i+1];
                Vector[i+1] = Temp;
            }
        }
        cout<<"Iteration No # "<<counter<<endl;
        for(int i =0;i<Size;i++){
            cout<<" "<<Vector[i];
         }
        cout<<endl;
        counter++;
    }
}

int main() {
    // Define an empty vector
    vector<int> My_Vector;

    // Push back values to vector
    for (int i = 10; i >= 0; i--) { // Corrected loop condition
        My_Vector.push_back(i); // Push back values from 10 to 0
    }

    Sort(My_Vector);
}
