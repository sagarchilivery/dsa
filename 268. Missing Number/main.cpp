// Example 1:

// Input: nums = [3,0,1]
// Output: 2
// Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
// Example 2:

// Input: nums = [0,1]
// Output: 2
// Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.
// Example 3:

// Input: nums = [9,6,4,2,3,5,7,0,1]
// Output: 8
// Explanation: n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    int start = 0;
    int end = nums.size();

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int count = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] <= mid)
            {
                count++;
            }
        }

        if (count > mid)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    cout << "The Number which was missing is -> " << start;
}