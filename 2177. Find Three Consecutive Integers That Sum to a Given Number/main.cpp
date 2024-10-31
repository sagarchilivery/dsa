// Example 1:

// Input: num = 33
// Output: [10,11,12]
// Explanation: 33 can be expressed as 10 + 11 + 12 = 33.
// 10, 11, 12 are 3 consecutive integers, so we return [10, 11, 12].
// Example 2:

// Input: num = 4
// Output: []
// Explanation: There is no way to express 4 as the sum of 3 consecutive integers.

// Constraints:

// 0 <= num <= 1015

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num = 33;

    for (int i = 0; i <= num; i++)
    {
        if (3 * i == num)
        {
            cout << "[ " << i - 1 << " " << i << " " << i + 1 << " " << " ]";
            break;
        }
    }
}
