// Example of Mutex in C++

// Let’s create a shared integer variable, which can be accessed globally inside the program. Create a function to increment the number by 1 for 1000000 times using a for loop. 
// Create two threads named thread1 and thread2 to run the same increment() function.
// In this case, thread1 will increment the number by 1 for 1000000 times and thread2 will increment the number by 1 for 1000000 times. So the expected output is 2000000.
// However, there is a possibility of occurrences of race conditions when multiple threads try to modify the same resource simultaneously. So the value of the number cannot be predicted.

// C++ program to illustrate the race conditions 
// #include <iostream> 
// #include <thread> 

// using namespace std; 

// // Shared resource 
// int number = 0; 

// // function to increment the number 
// void increment(){ 
	
// 	// increment number by 1 for 1000000 times 
// 	for(int i=0; i<1000000; i++){ 
// 		number++; 
// 	} 
// } 

// int main() 
// { 
// 	// Create thread t1 to perform increment() 
// 	thread t1(increment); 
	
// 	// Create thread t2 to perform increment() 
// 	thread t2(increment); 
	
// 	// Start both threads simultaneously 
// 	t1.join(); 
// 	t2.join(); 
	
// 	// Print the number after the execution of both threads 
// 	cout << "Number after execution of t1 and t2 is " << number; 
	
// 	return 0; 
// } 


// C++ program to illustrate the thread synchronization using mutex 
#include <iostream> 
#include <thread> 

using namespace std; 

// import mutex from C++ standard library 
#include <mutex> 

// Create object for mutex 
mutex mtx; 

// Shared resource 
int number = 0; 

// function to increment the number 
void increment(){ 
	
	// Lock the thread using lock 
	mtx.lock(); 
	
	// increment number by 1 for 1000000 times 
	for(int i=0; i<1000000; i++){ 
		number++; 
	} 
	
	// Release the lock using unlock() 
	mtx.unlock(); 
} 

int main() 
{ 
	// Create thread t1 to perform increment() 
	thread t1(increment); 
	
	// Create thread t2 to perform increment() 
	thread t2(increment); 
	
	// Start both threads simultaneously 
	t1.join(); 
	t2.join(); 
	
	// Print the number after the execution of both threads 
	std::cout<<"Number after execution of t1 and t2 is "<<number; 
	
	return 0; 
} 
