// Count Inversions of an Array
#include <bits/stdc++.h>
using namespace std;

int merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    int cnt = 0;  // initialize count

    // Merge the two sorted halves
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            cnt += (mid - left + 1); // all remaining left elements form inversions
            right++;
        }
    }

    // Copy remaining elements from left half
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining elements from right half
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy sorted elements back into original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

    return cnt;
}

int ms(vector<int> &arr, int low, int high) {
    if (low >= high) return 0;
    int mid = (low + high) / 2;

    int inv = 0;
    inv += ms(arr, low, mid);       // inversions in left half
    inv += ms(arr, mid + 1, high);  // inversions in right half
    inv += merge(arr, low, mid, high); // cross inversions

    return inv;
}

int mergeSort(vector<int> &arr, int n) {
    return ms(arr, 0, n - 1);
}

int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    int n = arr.size();

    int inversions = mergeSort(arr, n);

    cout << "Number of inversions: " << inversions << endl;

    return 0;
}
