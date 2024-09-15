
// Example 1:

// Input: n = 234
// Output: 15
// Explanation:
// Product of digits = 2 * 3 * 4 = 24
// Sum of digits = 2 + 3 + 4 = 9
// Result = 24 - 9 = 15
// Example 2:

// Input: n = 4421
// Output: 21
// Explanation:
// Product of digits = 4 * 4 * 2 * 1 = 32
// Sum of digits = 4 + 4 + 2 + 1 = 11
// Result = 32 - 11 = 21

#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
    int num = 123456;
    int product = 1, sum = 0;

    while (num != 0)
    {
        int digit = num % 10;
        product = product * digit;
        sum = sum + digit;
        num = num / 10;
    }
    cout << "Sum         ->" << sum << endl;
    cout << "Product     ->" << product << endl;
    cout << "Subtraction ->" << product - sum << endl;
    return 0;
}