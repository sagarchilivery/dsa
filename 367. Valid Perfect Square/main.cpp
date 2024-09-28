// Example 1:

// Input: num = 16
// Output: true
// Explanation: We return true because 4 * 4 = 16 and 4 is an integer.
// Example 2:

// Input: num = 14
// Output: false
// Explanation: We return false because 3.742 * 3.742 = 14 and 3.742 is not an integer.

#include <iostream>

using namespace std;
int main()
{
    int num = 168;
    long long int start = 0;
    long long int end = num;
    bool flag = false;
    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;
        long long int square = mid * mid;
        if (num == square)
        {
            cout << "PErfect";
            flag = true;
            break;
        }
        else if (num > square)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if (!flag)
    {
        cout << "Not PErfect";
    }
}