
// Exception Handling in C++
// In C++, exceptions are runtime anomalies or abnormal conditions that a program encounters during its execution. 
// The process of handling these exceptions is called exception handling. Using the exception handling mechanism, 
// the control from one part of the program where the exception occurred can be transferred to another part of the code.

// So basically using exception handling in C++, we can handle the exceptions so that our program keeps running.

// What is a C++ Exception?
// An exception is an unexpected problem that arises during the execution of a program our program terminates suddenly with some errors/issues.
// Exception occurs during the running of the program (runtime).

// Types:
// Synchronous: Exceptions that happen when something goes wrong because of a mistake in the input data or when the program is not equipped to handle the current type of data it’s working with, such as dividing a number by zero.
// Asynchronous: Exceptions that are beyond the program’s control, such as disc failure, keyboard interrupts, etc.


// try {         
//      // Code that might throw an exception
//      throw SomeExceptionType("Error message");
//  } 
// catch( ExceptionName e1 )  {   
//      // catch block catches the exception that is thrown from try block
//  } 


// C++ program to demonstate the use of try,catch and throw
// in exception handling.

#include <iostream>
#include <stdexcept>
using namespace std;

// int main()
// {

// 	// try block
// 	try {
// 		int numerator = 10;
// 		int denominator = 0;
// 		int res;

// 		// check if denominator is 0 then throw runtime
// 		// error.
// 		if (denominator == 0) {
// 			throw runtime_error(
// 				"Division by zero not allowed!");
// 		}

// 		// calculate result if no exception occurs
// 		res = numerator / denominator;
// 		//[printing result after division
// 		cout << "Result after division: " << res << endl;
// 	}
// 	// catch block to catch the thrown exception
// 	catch (const exception& e) {
// 		// print the exception
// 		cout << "Exception " << e.what() << endl;
// 	}

// 	return 0;
// }


// C++ program to demonstate the use of try,catch and throw
// in exception handling.

#include <iostream>
using namespace std;

int main()
{
	int x = -1;

	// Some code
	cout << "Before try \n";

	// try block
	try {
		cout << "Inside try \n";
		if (x < 0) {
			// throwing an exception
			throw x;
			cout << "After throw (Never executed) \n";
		}
	}

	// catch block
	catch (int x) {
		cout << "Exception Caught \n";
	}

	cout << "After catch (Will be executed) \n";
	return 0;
}

