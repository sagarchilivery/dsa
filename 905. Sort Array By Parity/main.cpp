// Example 1:

// Input: nums = [3,1,2,4]
// Output: [2,4,3,1]
// Explanation: The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
// Example 2:

// Input: nums = [0]
// Output: [0]

// Constraints:

// 1 <= nums.length <= 5000
// 0 <= nums[i] <= 5000

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {3, 1, 2, 4};

    int index = 0, pointer = 0;

    while (pointer < nums.size())
    {
        if (nums[pointer] % 2 == 0)
        {
            swap(nums[pointer], nums[index]);
            pointer++;
            index++;
        }
        else
        {
            pointer++;
        }
    }

    for (int i : nums)
    {
        cout << i << " ";
    }
    cout << endl;
}
