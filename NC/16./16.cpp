// Best Time to Buy and Sell Stock
// Input: prices = [10,1,5,6,7,1]
// Output: 6
// find the cost
// keep the count of maximum by comparing
// find the minimum

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> prices = {10, 1, 5, 6, 7, 1};
    int n = prices.size();
    int cost, profit = 0, mini = prices[0];
    for (int i = 0; i < n; i++)
    {
        cost = prices[i] - mini;
        profit = max(profit, cost);
        mini = min(mini, prices[i]);
    }
    cout << profit;
    return 0;
}