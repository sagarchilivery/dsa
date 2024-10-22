// Example 1:

// Input: nums = [2,2,1]
// Output: 1
// Example 2:

// Input: nums = [4,1,2,1,2]
// Output: 4
// Example 3:

// Input: nums = [1]
// Output: 1

// Constraints:

// 1 <= nums.length <= 3 * 104
// -3 * 104 <= nums[i] <= 3 * 104
// Each element in the array appears twice except for one element which appears only once.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {4, 1, 2, 1, 2};
    int ans = 0;
    for (int num : nums)
    {
        ans ^= num;
    }

    cout << "The Non duplciate number or single number is ---->  " << ans << endl;
}