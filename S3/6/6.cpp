// Find the second largest element in an array.

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {12, 45, 23, 67, 34, 89, 89, 21};
    int maxx = 0;
    int smax = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > maxx)
        {
            smax = maxx;
            maxx = arr[i];
        }
        else if (arr[i] > smax && arr[i] != maxx)
        {
            smax = arr[i];
        }
        //  This shows why the num != largest check is important:
        //  it prevents duplicates of the largest value from incorrectly becoming the second largest.
    }
    cout << smax << endl;
    return 0;
}
