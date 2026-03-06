// Best time to buy and sell stock single transaction
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxPrice(vector<int> &prices)
{
    int minSoFar = prices[0];
    int res = 0;

    for (int i = 1; i < prices.size(); i++)
    {
        minSoFar = min(minSoFar, prices[i]);
        res = max(res, prices[i] - minSoFar);
    }
    return res;
}
int main()
{
    vector<int> prices = {7, 10, 1, 3, 6, 9, 2};
    int R = maxPrice(prices);
    cout << R << endl;
}