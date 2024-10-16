// Example 1:

// Input: nums = [7,8,3,4,15,13,4,1]

// Output: 5.5

// Explanation:

// step	nums	averages
// 0	[7,8,3,4,15,13,4,1]	[]
// 1	[7,8,3,4,13,4]	[8]
// 2	[7,8,4,4]	[8,8]
// 3	[7,4]	[8,8,6]
// 4	[]	[8,8,6,5.5]
// The smallest element of averages, 5.5, is returned.
// Example 2:

// Input: nums = [1,9,8,3,10,5]

// Output: 5.5

// Explanation:

// step	nums	averages
// 0	[1,9,8,3,10,5]	[]
// 1	[9,8,3,5]	[5.5]
// 2	[8,5]	[5.5,6]
// 3	[]	[5.5,6,6.5]
// Example 3:

// Input: nums = [1,2,3,7,8,9]

// Output: 5.0

// Explanation:

// step	nums	averages
// 0	[1,2,3,7,8,9]	[]
// 1	[2,3,7,8]	[5]
// 2	[3,7]	[5,5]
// 3	[]	[5,5,5]

// Constraints:

// 2 <= n == nums.length <= 50
// n is even.
// 1 <= nums[i] <= 50

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums = {7, 8, 3, 4, 15, 13, 4, 1};
    vector<int> result;

    sort(nums.begin(), nums.end());

    int start = 0;
    int end = nums.size() - 1;

    while (start < end)
    {
        double sum = double(nums[start] + nums[end]) / 2;
        result.push_back(sum);
        start++;
        end--;
    }

    sort(result.begin(), result.end());

    cout << "Lowest average is --> " << result[0] << endl;
}