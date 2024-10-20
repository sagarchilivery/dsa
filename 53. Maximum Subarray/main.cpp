// Example 1:

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.
// Example 2:

// Input: nums = [1]
// Output: 1
// Explanation: The subarray [1] has the largest sum 1.
// Example 3:

// Input: nums = [5,4,-1,7,8]
// Output: 23
// Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.

// Constraints:

// 1 <= nums.length <= 105
// -104 <= nums[i] <= 104

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    // Approach 1
    // int maxi = nums[0];
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     int current_sum = 0;
    //     for (int j = i; j < nums.size(); j++)
    //     {
    //         current_sum = current_sum + nums[j];
    //         maxi = max(current_sum, maxi);
    //     }
    // }
    // cout << "Maximum sub array sum is -> " << maxi << endl;

    // Approach 2
    int maxi = nums[0];
    int sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        maxi = max(sum, maxi);

        if (sum < 0)
        {
            sum = 0;
        }
    }

    cout << "Maximum sub array sum is -> " << maxi << endl;
}
