// [Better Approach] Using Sorting – O(n*log n) Time and O(1) Space
// C++ program to print all distinct elements in an
// array using sorting

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findDistinct(vector<int> &arr) {
      vector<int> res;
      int n = arr.size();
  
    // First sort the array so that all occurrences 
    // become consecutive
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++) {
      
       // Store elements only if they are different 
       // from previous element
       if(i == 0 || arr[i] != arr[i - 1]) {
           res.push_back(arr[i]);
       }
    }
      return res;
}

int main() {
    vector<int> arr = {12, 10, 9, 45, 2, 10, 10, 45};
  
    vector<int> res = findDistinct(arr);
      for(int ele: res) {
          cout << ele << " ";
    }
    return 0;
}
