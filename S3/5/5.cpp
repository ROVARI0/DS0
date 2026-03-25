// Print the Fibonacci sequence up to N terms.

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n=10 ;
    int first=0,second=1;
    for(int i=1;i<=n;i++){
        cout<<first;
        int next=first+second;
        first=second;
        second=next;
    }
    return 0;
}
