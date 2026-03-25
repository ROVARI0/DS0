// Rotate an array to the left by K steps.

#include <iostream>
using namespace std;

// Function to reverse a portion of the array
void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate array to the left by k steps
void rotateLeft(int arr[], int n, int k) {
    k = k % n; // normalize k

    // Step 1: Reverse first k elements
    reverseArray(arr, 0, k - 1);

    // Step 2: Reverse remaining n-k elements
    reverseArray(arr, k, n - 1);

    // Step 3: Reverse the whole array
    reverseArray(arr, 0, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    rotateLeft(arr, n, k);

    cout << "Array after rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

