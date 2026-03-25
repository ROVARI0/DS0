// Check if a number is prime.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 29;
    bool isPrime = true;

    if (n <= 1)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i < n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;
    }
    return 0;
}

// program to print prime number up to given number

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 50;  // Example limit

//     cout << "Prime numbers up to " << n << " are: ";

//     for (int num = 2; num <= n; num++) {
//         bool isPrime = true;

//         // Check divisibility
//         for (int i = 2; i <= num / 2; i++) {
//             if (num % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }

//         if (isPrime) {
//             cout << num << " ";
//         }
//     }

//     cout << endl;
//     return 0;
// }
