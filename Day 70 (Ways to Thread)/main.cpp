//Using the function object:
// In the thread object, we can use a function object as callable. For implementing that function object, first, we need a class, 
// and inside that class, we have to overload the operator (). 
// When the thread is created, that time the code containing the overloaded function is executed.
    
    
    #include <iostream>  
    #include <thread>  
    using namespace std;  
      
    // function to be used in callable  
    void func_dummy(int N)  
     {  
       for (int i = 0; i < N; i++) {  
       cout << "Thread 1 :: callable => function pointer\n";  
       }  
     }  
        
    // A callable object   // Functor
    class thread_obj {  
     public:  
       void operator()(int n) {  
           for (int i = 0; i < n; i++)  
               cout << "Thread 2 :: callable => function object\n";  
       }  
    };  
        
    int main()  
    {  
    // Define a Lambda Expression  (Directly inject the function into variable and pass that to thread in similar way as function pointer method)
    auto f = [](int n) {  
       for (int i = 0; i < n; i++)  
       cout << "Thread 3 :: callable => lambda expression\n";  
       };  
    
    //launch thread using function pointer as callable  
    thread th1(func_dummy, 2);  
        
    // launch thread using function object as callable  
    thread th2(thread_obj(), 2);  // Functor
        
    //launch thread using lambda expression as callable  
    thread th3(f, 2); //whole function can be directly injected here in place of obj 
        
    // Wait for thread t1 to finish  
    th1.join();  
    // Wait for thread t2 to finish  
    th2.join();      
    // Wait for thread t3 to finish  
    th3.join();  
        
    return 0;  
    }  