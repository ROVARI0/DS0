// stock buy and sell

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> prices = {2, 3, 5, 7, 8};
    int n = prices.size();
    int maxi = 0, mini = prices[0], profit;
    for (int i = 1; i < n; i++)
    {
        profit = prices[i] - mini;
        maxi = max(maxi, profit);
        mini = min(mini, prices[i]);
    }
    cout << maxi;
    return 0;
}