// Program to sort array
#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> &arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}
void sortArray(vector<int> &arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printArray(arr, len);
}

int main()
{
    vector<int> array = {1, 4, 5, 3, 7, 8};
    int len = array.size();
    sortArray(array, len);
    return 0;
}
