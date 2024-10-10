// Example 1:

// Input: nums = [1,2,3,1], k = 3
// Output: true
// Example 2:

// Input: nums = [1,0,1,1], k = 1
// Output: true
// Example 3:

// Input: nums = [1,2,3,1,2,3], k = 2
// Output: false

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    vector<int> nums = {1, 0, 1, 1};
    int k = 1;

    unordered_map<int, int> hashmap;
    bool flag = false;

    for (int i = 0; i < nums.size(); i++)
    {
        if (flag)
        {
            break;
        }
        if (hashmap.find(nums[i]) != hashmap.end())
        {
            flag = abs(i - hashmap[nums[i]]) <= k;
            if (flag)
            {
                cout << "Match Found";
                break;
            }
            else
            {
                hashmap[nums[i]] = i;
            }
        }
        else
        {
            hashmap.insert({nums[i], i});
        }
    }

    if (!flag)
    {
        cout << "Match not found!";
    }
}
