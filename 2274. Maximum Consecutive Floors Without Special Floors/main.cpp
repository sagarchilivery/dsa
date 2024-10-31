// Example 1:

// Input: bottom = 2, top = 9, special = [4,6]
// Output: 3
// Explanation: The following are the ranges (inclusive) of consecutive floors without a special floor:
// - (2, 3) with a total amount of 2 floors.
// - (5, 5) with a total amount of 1 floor.
// - (7, 9) with a total amount of 3 floors.
// Therefore, we return the maximum number which is 3 floors.
// Example 2:

// Input: bottom = 6, top = 8, special = [7,6,8]
// Output: 0
// Explanation: Every floor rented is a special floor, so we return 0.

// Constraints:

// 1 <= special.length <= 105
// 1 <= bottom <= special[i] <= top <= 109
// All the values of special are unique.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int bottom = 6, top = 8;
    vector<int> special = {7, 6, 8};

    sort(special.begin(), special.end());

    int ans = 0;
    int index = bottom;

    for (int i = 0; i < special.size(); i++)
    {
        if (i == 0)
        {
            ans = max(ans, special[0] - bottom);
        }
        else
        {
            ans = max(ans, special[i] - special[i - 1] - 1);
        }
    }

    ans = max(ans, top - special[special.size() - 1]);
    cout << ans << endl;
}