#include <iostream>
#include <vector>
using namespace std;

// Function to add two vectors element-wise and store the result in a third vector
vector<int> addVectors(vector<int> vec1, vector<int> vec2) {
    vector<int> result;
    // Check if the vectors are of the same size
    if (vec1.size() != vec2.size()) {
        cerr << "Error: Vectors must be of the same size.\n";
        return result;
    }

    // Add corresponding elements from both vectors and store in the result vector
    for (size_t i = 0; i < vec1.size(); ++i) {
        result.push_back(vec1[i] + vec2[i]);
    }

    return result;
}

int main() {
    // Define two empty vectors
    std::vector<int> vector1;
    std::vector<int> vector2;

    // Push back values to vector1
    for (int i = 0; i < 5; ++i) {
        vector1.push_back(10); // Push back 10 five times
    }

    // Push back values to vector2
    for (int i = 0; i < 5; ++i) {
        vector2.push_back(10); // Push back 10 five times
    }
        
        cout<<"Size of Vector 1: "<<vector1.size()<<endl;
        cout<<"Size of Vector 2: "<<vector2.size()<<endl;

    // Add both vectors and store the result in a third vector
    std::vector<int> result = addVectors(vector1, vector2);

    // Output the result
    std::cout << "Resultant vector after adding both vectors:\n";
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
