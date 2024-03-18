// In C++ programming, we can pass objects to a function in a similar manner as passing regular arguments.

// C++ program to calculate the average marks of two students (Passing Object as Parameter)

// #include <iostream>
// using namespace std;

// class Student {

//    public:
//     double marks;

//     // constructor to initialize marks
//     Student(double m) {
//         marks = m;
//     }
// };

// // function that has objects as parameters
// void calculateAverage(Student s1, Student s2) {

//     // calculate the average of marks of s1 and s2 
//     double average = (s1.marks + s2.marks) / 2;

//    cout << "Average Marks = " << average << endl;

// }

// int main() {
//     Student student1(88.0), student2(56.0);

//   // pass the objects as arguments
//    calculateAverage(student1, student2);

//     return 0;
// }

// Example 2: C++ Return Object from a Function

#include <iostream>
using namespace std;

class Student {
   public:
    double marks1, marks2;

    void display(){
        
    cout << "Marks 1 = " << marks1 << endl;
    cout << "Marks 2 = " << marks2 << endl;
    }
};

// function that returns object of Student
Student createStudent() {
    Student student;

    // Initialize member variables of Student
    student.marks1 = 96.5;
    student.marks2 = 75.0;

    // print member variables of Student
    cout << "Marks 1 = " << student.marks1 << endl;
    cout << "Marks 2 = " << student.marks2 << endl;

    return student;
}

int main() {
    Student student1;

    // Call function
    student1 = createStudent();
    
    cout<<"In Main"<<endl;
    student1.display();

    return 0;
}