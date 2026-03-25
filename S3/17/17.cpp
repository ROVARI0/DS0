// Check if a number is an Armstrong number.

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 153;
    int temp = n, r, sum = 0;
    while (n > 0)
    {
        r = n % 10;
        sum += r * r * r;
        n /= 10;
    }
    if (temp == sum)
        cout << temp << " is an Armstrong number." << endl;
    else
        cout << temp << " is not an Armstrong number." << endl;
    return 0;
}
