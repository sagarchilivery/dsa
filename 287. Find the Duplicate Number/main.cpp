// Example 1:

// Input: nums = [1,3,4,2,2]
// Output: 2
// Example 2:

// Input: nums = [3,1,3,4,2]
// Output: 3
// Example 3:

// Input: nums = [3,3,3,3,3]
// Output: 3

// Constraints:

// 1 <= n <= 105
// nums.length == n + 1
// 1 <= nums[i] <= n

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {1, 3, 4, 2, 2};
    // int start = 0, end = nums.size();
    int start = 1, end = nums.size() - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        int count = 0;
        for (int num : nums)
        {
            if (num <= mid)
            {
                count++;
            }
        }

        if (count > mid)
        {
            end = mid;
        }

        else if (count <= mid)
        {
            start = mid + 1;
        }
    }

    cout << "The duplicated value is -> " << start << endl;
}
