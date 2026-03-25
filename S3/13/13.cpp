// Find the missing number in a range from 1 to N.

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N = 5, sum = 0, tsum = 0;
    vector<int> arr = {1, 2, 4, 5};
    
    // Sum of given array
    for (int i = 0; i <= arr.size(); i++)
    {
        sum += arr[i];
    }
    // Correct total sum of numbers from 1 to N
    for (int i = 0; i <= N; i++)
    {
        tsum += i;
    }
    cout << tsum - sum;
    return 0;
}