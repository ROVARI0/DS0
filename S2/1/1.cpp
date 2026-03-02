// Input: arr[] = [1, 4, 3, 2, 6, 5]
// Output:  [5, 6, 2, 3, 4, 1]
#include <iostream>
#include <vector>

using namespace std;

void rev(vector<int> &ar, int length)
{
    int start = 0, end = length - 1;
    while (start < end)
    {
        int temp = ar[start];
        ar[start] = ar[end];
        ar[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    vector<int> ar = {4, 3, 2, 1};
    int length = ar.size();
    rev(ar, length);
    for (int i = 0; i < length; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}
