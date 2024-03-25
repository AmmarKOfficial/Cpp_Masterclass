#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>
using namespace std;
using namespace std::chrono;

typedef long long int  ull;

void findEven(ull start, ull end, ull* EvenSum) {
    for (ull i = start; i <= end; ++i){
        if (!(i & 1)){
            *(EvenSum) += i;
        }
    }
}
 
void findOdd(ull start, ull end, ull* OddSum) {
    for (ull i = start; i <= end; ++i){
        if (i & 1){
            (*OddSum) += i;
        }
    }
}

int main()
{
    ull start = 0, end = 1900000000; 
 
    ull OddSum = 0;
    ull EvenSum = 0;
 
    auto startTime_tr = high_resolution_clock::now(); 

    cout<<"Execution Started"<<endl;
    // WITH THREAD
    std::thread t1(findEven, start, end, &(EvenSum));
    std::thread t2(findOdd, start, end, &(OddSum));
 
    t1.join();
    t2.join();

    auto stopTime_tr = high_resolution_clock::now(); 
    auto duration_tr = duration_cast<microseconds>(stopTime_tr - startTime_tr);
    
    auto startTime_wtr = high_resolution_clock::now(); 
    findEven(start,end, &EvenSum);
	findOdd(start, end, &OddSum);
	auto stopTime_wtr = high_resolution_clock::now(); 
    auto duration_wtr = duration_cast<microseconds>(stopTime_wtr - startTime_wtr);
 
    cout << "OddSum : " << OddSum << endl;
    cout << "EvenSum : " << EvenSum << endl;
    cout << "Sec (Thread): " << duration_tr.count()/1000000.0 << endl;
    cout << "Sec (Without Thread): " << duration_wtr.count()/1000000.0 << endl;
 
    return 0;
}
