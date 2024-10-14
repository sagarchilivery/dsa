

// Example 1:

// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation:
// nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
// nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
// nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
// The distinct triplets are [-1,0,1] and [-1,-1,2].
// Notice that the order of the output and the order of the triplets does not matter.
// Example 2:

// Input: nums = [0,1,1]
// Output: []
// Explanation: The only possible triplet does not sum up to 0.
// Example 3:

// Input: nums = [0,0,0]
// Output: [[0,0,0]]
// Explanation: The only possible triplet sums up to 0.

// Constraints:

// 3 <= nums.length <= 3000
// -105 <= nums[i] <= 105

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result;

    int n = nums.size();

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        int start = i + 1;
        int end = n - 1;

        while (start < end)
        {
            int sum = nums[start] + nums[end] + nums[i];
            if (sum < 0)
            {
                start++;
            }
            else if (sum > 0)
            {
                end--;
            }
            else
            {
                result.push_back({nums[i], nums[start], nums[end]});

                start++;
                while (nums[start] == nums[start - 1] && start < end)
                {
                    start++;
                }
            }
        }
    }

    for (vector<int> item : result)
    {
        for (int i : item)
        {
            cout << " " << i << " ";
        }
        cout << endl;
    }
}
