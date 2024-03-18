#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findUnionIntersectionDifference(const vector<int> vec1, const vector<int> vec2) {
    vector<int> unionVec;
    vector<int> intersectionVec;
    vector<int> differenceVec1;
    vector<int> differenceVec2;

    // Union
    unionVec = vec1;
    unionVec.insert(unionVec.end(), vec2.begin(), vec2.end());
    sort(unionVec.begin(), unionVec.end());
    unionVec.erase(unique(unionVec.begin(), unionVec.end()), unionVec.end());

    // Intersection
    set_intersection(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), back_inserter(intersectionVec));

    // Difference (vec1 - vec2)
    set_difference(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), back_inserter(differenceVec1));

    // Difference (vec2 - vec1)
    set_difference(vec2.begin(), vec2.end(), vec1.begin(), vec1.end(), back_inserter(differenceVec2));

    // Output
    cout << "Union: ";
    for (int num : unionVec)
        cout << num << " ";
    cout << endl;

    cout << "Intersection: ";
    for (int num : intersectionVec)
        cout << num << " ";
    cout << endl;

    cout << "Difference (vec1 - vec2): ";
    for (int num : differenceVec1)
        cout << num << " ";
    cout << endl;

    cout << "Difference (vec2 - vec1): ";
    for (int num : differenceVec2)
        cout << num << " ";
    cout << endl;
}
int main() {
    // Define an empty vector
    vector<int> My_Vector1;
    vector<int> My_Vector2;

    // Push back values to vector
    for (int i = 10; i >= 0; i--) { // Corrected loop condition
        My_Vector1.push_back(i); // Push back values from 10 to 0
    }

    // Push back values to vector
    for (int i = 10; i >= 5; i--) { // Corrected loop condition
        My_Vector2.push_back(i); // Push back values from 10 to 0
    }

    findUnionIntersectionDifference(My_Vector1,My_Vector2);
    
}
