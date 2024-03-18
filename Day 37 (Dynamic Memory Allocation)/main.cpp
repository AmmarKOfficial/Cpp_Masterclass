// Dynamic array size allocation in C refers to the process of assigning memory for an array during runtime instead of compile time. 
// This allows programming flexibility as the array size can be adjusted based on the user input or specific application requirements. 
// Memory for dynamic arrays is allocated using pointers and memory allocation functions, such as malloc or calloc. 
// Dynamic arrays can be resized during runtime using realloc, but proper management of allocated memory, such as deallocation using free, is crucial to prevent memory leaks.

// The length (size) of the array above is 9. But what if there is a requirement to change this length (size)? For example, 

// If there is a situation where only 5 elements are needed to be entered in this array. In this case, the remaining 4 indices are just wasting memory in this array. 
// So there is a requirement to lessen the length (size) of the array from 9 to 5.
// Take another situation. In this, there is an array of 9 elements with all 9 indices filled. But there is a need to enter 3 more elements in this array. 
// In this case, 3 indices more are required. So the length (size) of the array needs to be changed from 9 to 12.
// This procedure is referred to as Dynamic Memory Allocation in C.
// Therefore, C Dynamic Memory Allocation can be defined as a procedure in which the size of a data structure (like Array) is changed during the runtime.

// There are 4 library functions provided by C defined under <stdlib.h> header file to facilitate dynamic memory allocation in C programming. They are: 
// malloc()
// calloc()
// free()
// realloc()

// C malloc() method
// The “malloc” or “memory allocation” method in C is used to dynamically allocate a single large block of memory with the specified size. 
// It returns a pointer of type void which can be cast into a pointer of any form. 
// It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially. 

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    // ptr = (cast-type*) malloc(byte-size)
    // ptr = (int*) malloc(100 * sizeof(int));

    int *Ptr;
    int Num,i;

    cout<<"How many Elements You Want in Array: ";cin>>Num;
    cout<<"Ok, So The Array Will Be Off: "<<Num<<" Size"<<endl;
    int Numq[Num];
    
    // Dynamically allocate memory using malloc()
    Ptr = (int*)malloc(Num * sizeof(int));

    // Check if the memory has been successfully
    // allocated by malloc or not
    if (Ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else{
        // Memory has been successfully allocated
        cout<<"Memory successfully allocated using malloc.\n";
 
    }

    // Get the elements of the array
        for (i = 0; i < Num; ++i) {
            Ptr[i] = i + 1;
        }

    // Print the elements of the array
        cout<<"The elements of the array are: ";
        for (i = 0; i < Num; ++i) {
            cout<<"  "<< Ptr[i];
        }

    return 0;
}