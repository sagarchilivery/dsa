// Example 1:

// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]
// Example 2:

// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]

// Constraints:

// 2 <= nums.length <= 105
// -30 <= nums[i] <= 30
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4};

    cout << "Nums    -> ";
    for (int i : nums)
    {
        cout << i << " ";
    }
    cout << endl;

    // -----------------------------------------------------------------------------------
    // Approach 1 -----------------------------------------------------------------------------------
    // -----------------------------------------------------------------------------------

    // vector<int> result(nums.size());
    // vector<int> left_vec(nums.size(), 1);
    // vector<int> right_vec(nums.size(), 1);

    // int left = 1;
    // int right = 1;

    // for (int i = 1; i < nums.size(); i++)
    // {
    //     left_vec[i] = left_vec[i - 1] * nums[i - 1];
    // }

    // for (int j = nums.size() - 2; j >= 0; j--)
    // {
    //     right_vec[j] = right_vec[j + 1] * nums[j + 1];
    // }

    // cout << "Left    -> ";
    // for (int i : left_vec)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // cout << "Right   -> ";
    // for (int j : right_vec)
    // {
    //     cout << j << " ";
    // }
    // cout << endl;

    // for (int k = 0; k < nums.size(); k++)
    // {
    //     result[k] = left_vec[k] * right_vec[k];
    // }

    // -----------------------------------------------------------------------------------
    // Approach 2 (Efficient way) -----------------------------------------------------------------------------------
    // -----------------------------------------------------------------------------------

    vector<int> result(nums.size(), 1);

    int right = 1, left = 1;

    for (int i = 0; i < nums.size(); i++)
    {
        result[i] = left * result[i];
        left = left * nums[i];
    }

    for (int j = nums.size() - 1; j >= 0; j--)
    {
        result[j] = result[j] * right;
        right = right * nums[j];
    }

    cout << "Result  -> ";
    for (int k : result)
    {
        cout << k << " ";
    }
    cout << endl;
}