// Move all zeros to the end of an array.

#include <iostream>
#include <vector>
using namespace std;
void swapNumbers(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    vector<int> arr = {2, 0, 4, 5, 0, 9};
    int pnt = -1;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            pnt = i;
            break;
        }
    }
    for (int i = pnt + 1; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            swapNumbers(arr[i], arr[pnt]);
            pnt++;
        }
    }
    cout << "Array after moving zeros: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;
    return 0;
}
