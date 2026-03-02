#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 3, 45, 7, 19, 23, 89, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minVal = arr[0];
    int maxVal = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minVal)
            minVal = arr[i];
        else if (arr[i] > maxVal)
            maxVal = arr[i];
    }

    cout << "Minimum: " << minVal << endl;
    cout << "Maximum: " << maxVal << endl;

    return 0;
}
