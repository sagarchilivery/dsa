// Example 1:

// Input: nums = [3,1,-2,-5,2,-4]
// Output: [3,-2,1,-5,2,-4]
// Explanation:
// The positive integers in nums are [3,1,2]. The negative integers are [-2,-5,-4].
// The only possible way to rearrange them such that they satisfy all conditions is [3,-2,1,-5,2,-4].
// Other ways such as [1,-2,2,-5,3,-4], [3,1,2,-2,-5,-4], [-2,3,-5,1,-4,2] are incorrect because they do not satisfy one or more conditions.
// Example 2:

// Input: nums = [-1,1]
// Output: [1,-1]
// Explanation:
// 1 is the only positive integer and -1 the only negative integer in nums.
// So nums is rearranged to [1,-1].

// Constraints:

// 2 <= nums.length <= 2 * 105
// nums.length is even
// 1 <= |nums[i]| <= 105
// nums consists of equal number of positive and negative integers.

// It is not required to do the modifications in-place.

#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> nums = {28, -41, 22, -8, -37, 46, 35, -9, 18, -6, 19, -26, -37, -10, -9, 15, 14, 31};
    int n = nums.size(), positive = 0, negative = 1;
    vector<int> result(n);

    for (int &num : nums)
    {
        if (num > 0)
        {
            result[positive] = num;
            positive += 2;
        }
        else
        {
            result[negative] = num;
            negative += 2;
        }
    }

    cout << "The answer is ---------" << endl;
    for (int i : nums)
    {
        cout << i << " ";
    }
    cout << endl
         << "       ---------       " << endl;
}