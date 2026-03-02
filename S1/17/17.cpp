
// Input: arr = [-2,1,-3,4,-1,2,1,-5,4] 
// Output: 6 
// Explanation: [4,-1,2,1] has the largest sum = 6. 

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = arr.size();
    int maxi = 0, sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        if (sum > maxi)
        {
            maxi = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << maxi << endl;
    return 0;
}

// It will just add till sum is not less than 0 and when it 
// encounters 0 it will reset sum to 0 ;