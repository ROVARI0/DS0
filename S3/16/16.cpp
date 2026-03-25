// Find the largest sum subarray (Kadane’s Algorithm).

#include <bits/stdc++.h>
using namespace std;

// Function to return maximum subarray sum
long long maxSubarraySum(int arr[], int n) {
    long long sum = 0, maxi = LONG_MIN;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (sum > maxi) {
            maxi = sum;
        }

        if (sum < 0) {
            sum = 0;
        }
    }

    return maxi;
}

// Function to also print the subarray
void kadaneWithSubarray(int arr[], int n) {
    long long sum = 0, maxi = LONG_MIN;
    int start = 0, end = 0, s = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (sum > maxi) {
            maxi = sum;
            start = s;
            end = i;
        }

        if (sum < 0) {
            sum = 0;
            s = i + 1;
        }
    }

    cout << "Maximum subarray sum is " << maxi << endl;
    cout << "Subarray: ";
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Kadane’s Algorithm (sum only): " << maxSubarraySum(arr, n) << endl;
    kadaneWithSubarray(arr, n);

    return 0;
}
