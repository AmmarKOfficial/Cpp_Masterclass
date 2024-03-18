#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}
    
    // // Constructor with two parameters
    // Circle(double r, double m) : radius(r), anotherVariable(m) {}
    
    // Function to calculate the area of the circle
    double calculateArea() const {
        return 3.14159 * radius * radius;
    }

    // Function to calculate the circumference of the circle
    double calculateCircumference() const {
        return 2 * 3.14159 * radius;
    }
};

int main() {
    double radius;

    // Input for radius
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Create a Circle object
    Circle circle(radius);

    // Calculate and display the area of the circle
    cout << "Area of the circle: " << circle.calculateArea() << endl;

    // Calculate and display the circumference of the circle
    cout << "Circumference of the circle: " << circle.calculateCircumference() << endl;

    return 0;
}
