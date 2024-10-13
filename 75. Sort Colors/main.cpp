// Example 1:

// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
// Example 2:

// Input: nums = [2,0,1]
// Output: [0,1,2]

// Constraints:

// n == nums.length
// 1 <= n <= 300
// nums[i] is either 0, 1, or 2.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums = {0, 2, 0, 2, 1, 1, 2, 1, 0};
    int start = 0, mid = 0, end = nums.size();
    while (mid <= end)
    {
        if (nums[mid] == 0)
        {
            swap(nums[start], nums[mid]);
            mid++;
            start++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[end]);
            end--;
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    cout << endl;
    return 0;
}