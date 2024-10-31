// Example 1:

// Input: nums = [1,2,3]
// Output: [1,3,2]
// Example 2:

// Input: nums = [3,2,1]
// Output: [1,2,3]
// Example 3:

// Input: nums = [1,1,5]
// Output: [1,5,1]

// Constraints:

// 1 <= nums.length <= 100
// 0 <= nums[i] <= 100

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums = {3, 2, 1, 4, 5, 6, 7, 8, 9, 0};
    int n = nums.size();

    int index = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] > nums[i + 1])
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        reverse(nums.begin(), nums.end());
    }
    else
    {
        for (int j = n - 1; j > index; j--)
        {
            if (nums[j] > nums[index])
            {
                swap(nums[index], nums[j]);
                break;
            }
        }

        reverse(nums.begin() + index + 1, nums.end());
    }
    for (int i : nums)
    {
        cout << i << " ";
    }
}