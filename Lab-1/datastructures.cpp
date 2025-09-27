// 2) Find the Second Smallest Element in an Array (O(n) time, O(1) space)

#include <iostream>
#include <climits>  // This is for INT_MAX to handle large numbers

using namespace std;

int findSecondSmallest(int arr[], int n) {
    if (n < 2) {
        cout << "Array must have at least two elements." << endl;
        return -1;  // Not enough elements
    }

    int smallest = INT_MAX;
    int second_smallest = INT_MAX;

    // Traverse the array once
    for (int i = 0; i < n; i++) {
        // Update smallest and second smallest
        if (arr[i] < smallest) {
            second_smallest = smallest;  // old smallest becomes second smallest
            smallest = arr[i];  // new smallest
        } 
        else if (arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];
        }
    }

    if (second_smallest == INT_MAX) {
        cout << "No second smallest element found." << endl;
        return -1;  // No second smallest element (all elements might be the same)
    }

    return second_smallest;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int secondSmallest = findSecondSmallest(arr, n);

    if (secondSmallest != -1) {
        cout << "The second smallest element is: " << secondSmallest << endl;
    }

    return 0;
}
