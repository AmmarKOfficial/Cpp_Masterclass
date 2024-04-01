#include <iostream>
#include "calc.cpp" // Including the file where functions are defined

int main() {
    int num1 = 10, num2 = 5;
    Calcu Obj;
    // Call add function
    int sum = Obj.add(num1, num2);
    std::cout << "Sum: " << sum << std::endl;

    // Call subtract function
    int difference = Obj.subtract(num1, num2);
    std::cout << "Difference: " << difference << std::endl;

    return 0;
}
