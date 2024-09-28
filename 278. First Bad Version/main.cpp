// Example 1:

// Input: n = 5, bad = 4
// Output: 4
// Explanation:
// call isBadVersion(3) -> false
// call isBadVersion(5) -> true
// call isBadVersion(4) -> true
// Then 4 is the first bad version.
// Example 2:

// Input: n = 1, bad = 1
// Output: 1

#include <iostream>
using namespace std;

bool isBadVersion(int n)
{
    if (n == 50)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int first_bad_version = 101;
    int start = 0;
    int end = first_bad_version;
    int ans = 0;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isBadVersion(mid))
        {
            end = mid - 1;
            ans = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << ans;
}