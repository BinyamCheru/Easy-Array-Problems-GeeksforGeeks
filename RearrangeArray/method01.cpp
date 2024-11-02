//C++ program to Rearrange array such that even positioned are greater than odd
/*
Time Complexity: O(N * log N), where N is the size of input array arr[].
Auxiliary Space: O(N)
*/
#include <bits/stdc++.h>
using namespace std;

// function to rearrange the elements in array such that
// even positioned are greater than odd positioned elements
void assign(int arr[], int N)
{
    // Sort the array
    sort(arr, arr + N);

    int ans[N];
    int ptr1 = 0, ptr2 = N - 1;
    for (int i = 0; i < N; i++) {
        // Assign even indexes with maximum elements
        if (i % 2 == 1)
            ans[i] = arr[ptr2--];
        // Assign odd indexes with remaining elements
        else
            ans[i] = arr[ptr1++];
    }

    // Print result
    for (int i = 0; i < N; i++)
        cout << ans[i] << " ";
}

// Driver Code
int main()
{
    int arr[] = { 1, 2, 2, 1 };
    int N = sizeof(arr) / sizeof(arr[0]);
    assign(arr, N);
    return 0;
}
