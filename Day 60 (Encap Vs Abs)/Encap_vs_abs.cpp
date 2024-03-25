// Abstraction: 
// In OOPs, Abstraction is the method of getting information where the information needed will be taken in such a simplest way that solely the required components are extracted, and also the ones that are considered less significant are unnoticed. The concept of abstraction only shows necessary information to the users. It reduces the complexity of the program by hiding the implementation complexities of programs. 
// Example of Abstraction:

#include <iostream>
using namespace std;

class Summation {
private:
	// private variables
	int a, b, c; 
public:
	void sum(int x, int y)
	{
		a = x;
		b = y;
		c = a + b;
		cout<<"Sum of the two number is : "<<c<<endl;
	}
};
int main()
{
	Summation s;
	s.sum(5, 4);
	return 0;
}

// In the this example, we can see that abstraction has achieved by using class. The class ‘Summation’ holds the private members a, b and c, which are only accessible by the member functions of that class.

// Encapsulation: 
// Encapsulation is the process or method to contain the information. Encapsulation is a method to hide the data in a single entity or unit along with a method to protect information from outside world. This method encapsulates the data and function together inside a class which also results in data abstraction. 
// Example of Encapsulation:

#include <iostream>
using namespace std;

class EncapsulationExample {
private:
	// we declare a as private to hide it from outside
	int a; 

public:
	// set() function to set the value of a
	void set(int x) 
	{
		a = x;
	}

	// get() function to return the value of a
	int get() 
	{
		return a;
	}
};

// main function
int main() 
{
	EncapsulationExample e1;

	e1.set(10);

	cout<<e1.get();
	return 0;
}


// In the this program, the variable a is made private so that this variable can be accessed and manipulated only by using the methods get() and set() that are present within the class. Therefore we can say that, the variable a and the methods set() as well as get() have binded together that is nothing but encapsulation.