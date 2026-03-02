// Input: N = 7, array[] = {1,2,3,4,5,6,7} , k=2 , right
// Output: 6 7 1 2 3 4 5
// Explanation: array is rotated to right by 2 position .

#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr, int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void rotateByTwo(vector<int> &arr, int len, int k)
{
    k = k % len;                   // To handle cases where k > n
    reverseArray(arr, 0, len - 1); // Reverse entire array
    reverseArray(arr, 0, k - 1);   // Reverse first k elements
    reverseArray(arr, k, len - 1); // Reverse remaining elements
}
int main()
{
    vector<int> array = {1, 2, 3, 4, 5, 6, 7};
    int len = array.size();
    int k = 2;
    rotateByTwo(array, len, k);
    for (int i = 0; i < len; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
