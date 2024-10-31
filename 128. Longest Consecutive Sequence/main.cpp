// Medium
// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

// You must write an algorithm that runs in O(n) time.

// Example 1:
// Input: nums = [100,4,200,1,3,2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

// Example 2:
// Input: nums = [0,3,7,2,5,8,4,6,0,1]
// Output: 9

#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    unordered_set<int> hashset;

    int n = nums.size();
    if (n == 0)
        return 0;

    for (int num : nums)
    {
        hashset.insert(num);
    }

    int longest = 1;

    for (int item : hashset)
    {
        if (hashset.find(item - 1) == hashset.end())
        {
            int count = 1;
            int x = item;
            while (hashset.find(x + 1) != hashset.end())
            {
                x += 1;
                count += 1;
                longest = max(longest, count);
            }
        }
    }

    cout << "Longest --> " << longest;
}