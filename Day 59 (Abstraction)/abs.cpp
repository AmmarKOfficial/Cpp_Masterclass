
// Abstraction in C++
// Data abstraction is one of the most essential and important features of object-oriented programming in C++. Abstraction means displaying only essential information and hiding the details. Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementation. 
// Consider a real-life example of a man driving a car. The man only knows that pressing the accelerator will increase the speed of the car or applying brakes will stop the car but he does not know how on pressing the accelerator the speed is actually increasing, he does not know about the inner mechanism of the car or the implementation of the accelerator, brakes, etc in the car. This is what abstraction is.

// Types of Abstraction:
// Data abstraction – This type only shows the required information about the data and hides the unnecessary data.
// Control Abstraction – This type only shows the required information about the implementation and hides unnecessary information.

// C++ Program to Demonstrate the
// working of Abstraction
// #include <iostream>
// using namespace std;

// class implementAbstraction {
// private:
// 	int a, b;

// public:
// 	// method to set values of
// 	// private members
// 	void set(int x, int y)
// 	{
// 		a = x;
// 		b = y;
// 	}

// 	void display()
// 	{
// 		cout << "a = " << a << endl;
// 		cout << "b = " << b << endl;
// 	}
// };

// int main()
// {
// 	implementAbstraction obj;
// 	obj.set(10, 20);
// 	obj.display();
// 	return 0;
// }


#include<iostream>
using namespace std;

class Vehicle
{
private:
		void piston()
		{
			cout<<"4 piston\n";
		}

		void manWhoMade()
		{
			cout<<"Markus Librette\n";
		}
	public:
		void company()
		{
			cout<<"GFG\n";
		}
		void model()
		{
			cout<<"SIMPLE\n";
		}
		void color()
		{
			cout<<"Red/GREEN/Silver\n";
		}
		void cost()
		{
			cout<<"Rs. 60000 to 900000\n";
		}
		void oil()
		{
			cout<<"PETRO\n";
		}
};
int main()
{
	
	Vehicle obj;
	obj.company();
	obj.model();
	obj.color();
	obj.cost();
	obj.oil();
}

