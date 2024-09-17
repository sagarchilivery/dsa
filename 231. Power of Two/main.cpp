// Example 1:
// Input: n = 1
// Output: true
// Explanation: 2^0 = 1

// Example 2:
// Input: n = 16
// Output: true
// Explanation: 2^4 = 16

// Example 3:
// Input: n = 3
// Output: false

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number";
    cin >> num;
    bool found = false;

    for (int i = 0; i <= 30; i++)
    {
        int power = pow(2, i);
        if (num == power)
        {
            found = true;
        }
    }

    if (found)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }
}