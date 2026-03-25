// Count the number of even and odd numbers in a list.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {12, 45, 23, 67, 34, 89, 21, 40};
    int length = arr.size();
    int even = 0, odd = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << even << " " << odd << endl;
    return 0;
}