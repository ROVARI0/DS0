//merger sort

#include <bits/stdc++.h>
using namespace std;

// Merge two sorted halves: arr[low..mid] and arr[mid+1..high]
void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    // Compare and merge
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy remaining left half
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining right half
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy back to original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

// Recursive merge sort
void mS(vector<int> &arr, int low, int high) {
    if (low == high) return;
    int mid = (low + high) / 2;
    mS(arr, low, mid);
    mS(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

// Entry point
void mergeSort(vector<int> &arr, int n) {
    mS(arr, 0, n - 1);
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 6, 3};
    int n = arr.size();

    mergeSort(arr, n);

    cout << "Sorted array: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}
