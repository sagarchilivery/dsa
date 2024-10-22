// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2

// Constraints:

// n == nums.length
// 1 <= n <= 5 * 104
// -109 <= nums[i] <= 109

// Follow-up: Could you solve the problem in linear time and in O(1) space?

#include <iostream>
#include <vector>

using namespace std;
// Boyer-moore voting algorithm space->O(1) time->O(n)
int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int element, count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0)
        {
            element = nums[i];
            count = 1;
        }
        else if (nums[i] == element)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    cout << "The Answerr is -->  " << element << endl;
}