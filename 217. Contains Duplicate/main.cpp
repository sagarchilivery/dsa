// Example 1:

// Input: nums = [1,2,3,1]

// Output: true

// Explanation:

// The element 1 occurs at the indices 0 and 3.

// Example 2:

// Input: nums = [1,2,3,4]

// Output: false

// Explanation:

// All elements are distinct.

// Example 3:

// Input: nums = [1,1,1,3,3,4,3,2,4,2]

// Output: true

#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    vector<int> nums = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    set<int> set;
    bool flag = false;

    for (int i = 0; i < nums.size(); i++)
    {
        if (set.find(nums[i]) != set.end())
        {
            cout << "Duplicate Found!";
            flag = true;
            break;
        }

        set.insert(nums[i]);
    }

    if (!flag)
    {
        cout << "No Duplicate Found";
    }

    return 0;
}
