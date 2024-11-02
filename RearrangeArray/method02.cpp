/*
Time Complexity: O(N), where N is the size of input array arr[].
Auxiliary Space: O(1)
*/
#include <iostream>
using namespace std;

// Function to rearrange the elements in the array
void rearrange(int arr[], int N) {
    // Traverse the array
    for (int i = 1; i < N; i++) {
        // Check if the index is even (1-based) => i+1 is even
        if ((i + 1) % 2 == 0) {
            // Ensure arr[i] >= arr[i-1]
            if (arr[i] < arr[i - 1]) {
                swap(arr[i], arr[i - 1]);
            }
        } else {
            // Ensure arr[i] <= arr[i-1]
            if (arr[i] > arr[i - 1]) {
                swap(arr[i], arr[i - 1]);
            }
        }
    }
}

int main() {
    // Sample Input
    int arr[] = {1, 2, 2, 1};
    int N = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, N);

    // Output the rearranged array
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << "\n";

    return 0;
}
