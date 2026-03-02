//Union of array
#include <iostream>
#include <vector>
using namespace std;

bool isPresent(int arr[], int size, int val)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == val)
            return true;
    }
    return false;
}

int main()
{
    int arr1[] = {1, 2, 3, 2, 1};
    int arr2[] = {3, 2, 2, 3, 3, 2};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int unionArr[100];
    int unionSize = 0;

    for (int i = 0; i < size1; i++)
    {
        if (!isPresent(unionArr, unionSize, arr1[i]))
        {
            unionArr[unionSize++] = arr1[i];
        }
    }
    for (int i = 0; i < size2; i++)
    {
        if (!isPresent(unionArr, unionSize, arr2[i]))
        {
            unionArr[unionSize++] = arr2[i];
        }
    }
    cout << "Union of arrays: ";
    for (int i = 0; i < unionSize; i++)
    {
        cout << unionArr[i] << " ";
    }
    cout << endl;
    return 0;
}