// Print all Distinct (Unique) Elements in given Array
// [Naive Approach] Using Nested loops – O(n^2) Time and O(1) Space

// C++ program to print all distinct elements in an
// array using nested loops

#include <iostream>
#include <vector>
using namespace std;

vector<int> findDistinct(vector<int> &arr) {
    vector<int> res;

    for (int i = 0; i < arr.size(); i++) {

        // Check if this element is included in result
        int j;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;

        // Include this element if not included previously
        if (i == j)
            res.push_back(arr[i]);
    }
    return res;
}

int main() {
    vector<int> arr = {12, 10, 9, 45, 2, 10, 10, 45};
    vector<int> res = findDistinct(arr);

    for (int ele : res)
        cout << ele << " ";
    return 0;
}
