// Reverse a given string.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string st = "sample String";
    int n = st.length();
    for (int i = 0; i < n / 2; i++)
    {
        int temp = st[i];
        st[i] = st[n - i-1];
        st[n - i-1 ] = temp;
    }
    cout << st;
    return 0;
}