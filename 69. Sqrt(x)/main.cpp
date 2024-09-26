// Example 1:

// Input: x = 4
// Output: 2
// Explanation: The square root of 4 is 2, so we return 2.
// Example 2:

// Input: x = 8
// Output: 2
// Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int search_via_bianry(int n)
{
    int ans = -1;
    int start = 0;
    int end = n;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (pow(mid, 2) > n)
        {
            end = mid - 1;
        }
        else if (pow(mid, 2) < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (pow(mid, 2) == n)
        {
            return mid;
        }
    }

    return ans;
}

int main()
{
    int num;
    cout << "Enter a number to check the whose square root value it will be => ";
    cin >> num;
    cout << "The square root of " << num << " is " << search_via_bianry(num);
}