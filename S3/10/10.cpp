// Calculate the factorial of a number.

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 3, fact = 1;
    while (n > 0)
    {
        fact *= n;
        n--;
    }
    cout << fact;
    return 0;
}
