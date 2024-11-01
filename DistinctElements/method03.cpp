//[Expected Approach] Using Hashing – O(n) Time and O(n) Space
// C++ program to print all distinct elements 
// of a given array 

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// function to return all distinct elements
vector<int> findDistinct(vector<int> &arr) {
      
    // Initialize set with all elements of array
    unordered_set<int> st (arr.begin(), arr.end());
  
    // Return the result array by inserting all 
    // elements from hash set
      return vector<int> (st.begin(), st.end());
}

int main () {
    vector<int> arr = {12, 10, 9, 45, 2, 10, 10, 45};
    
      vector<int> res = findDistinct(arr);
      for (int ele: res)
          cout << ele << " ";
    return 0;
}
