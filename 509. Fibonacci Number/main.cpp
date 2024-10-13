// Example 1:

// Input: n = 2
// Output: 1
// Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.
// Example 2:

// Input: n = 3
// Output: 2
// Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.
// Example 3:

// Input: n = 4
// Output: 3
// Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.

#include <iostream>
#include <vector>

using namespace std;

int fib(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cout << "Enter a number to get it fibonacci -> ";
    cin >> n;

    cout << "The Fibonacci is -> " << fib(n) << endl;

    return 0;
}