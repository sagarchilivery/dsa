// Example 1:

// Input: nums = [1,3,2,2,5,2,3,7]

// Output: 5

// Explanation:

// The longest harmonious subsequence is [3,2,2,2,3].

// Example 2:

// Input: nums = [1,2,3,4]

// Output: 2

// Explanation:

// The longest harmonious subsequences are [1,2], [2,3], and [3,4], all of which have a length of 2.

// Example 3:

// Input: nums = [1,1,1,1]

// Output: 0

// Explanation:

// No harmonic subsequence exists.

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    vector<int> nums = {1, 3, 2, 2, 5, 2, 3, 7};
    unordered_map<int, int> hashmap;

    int max_sum = 0;

    for (int num : nums)
    {
        hashmap[num]++;
    }

    for (auto &[key, value] : hashmap)
    {
        if (hashmap.find(key + 1) != hashmap.end())
        {
            int sum = hashmap[key] + hashmap[key + 1];
            max_sum = max(sum, max_sum);
        }
    }

    cout << "Longest Harmonial Sequense is count of -> " << max_sum;
    cout << endl;
}