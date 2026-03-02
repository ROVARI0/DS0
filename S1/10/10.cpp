// missing number in array
#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int> &arr, int len)
{
    int sum1 = 0;
    int sum2 = 0;
    int ans;
    for (int i = 1; i <= len + 1; i++)
    {
        sum1 += i;
       
    }
    for (int i = 0; i < len; i++)
    {
         sum2 += arr[i];
    }
    return ans = sum1 - sum2;
}
int main()
{
    vector<int> arr = {1, 3, 4, 5};
    int len = arr.size();
    
    int ans = missingNumber(arr, len);
    cout << "The missing number is: " << ans << endl;
    return 0;
}