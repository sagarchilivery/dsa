// Example 1:

// Input: nums = [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
// Example 2:

// Input: nums = [1,0,1,1,0,1]
// Output: 2

// Constraints:

// 1 <= nums.length <= 105
// nums[i] is either 0 or 1.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 1};

    int temp = 0;
    int sum = 0;

    for (int i : nums)
    {
        if (i == 1)
        {
            temp += 1;
        }
        else
        {
            temp = 0;
        }

        sum = max(sum, temp);
    }

    cout << "The Max consecutive ones length is  --->  " << sum << endl;
}