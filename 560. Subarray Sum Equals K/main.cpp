// 560. Subarray Sum Equals K
// Solved
// Medium
// Topics
// Companies
// Hint
// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

// A subarray is a contiguous non-empty sequence of elements within an array.

// Example 1:

// Input: nums = [1,1,1], k = 2
// Output: 2
// Example 2:

// Input: nums = [1,2,3], k = 3
// Output: 2

// Constraints:

// 1 <= nums.length <= 2 * 104
// -1000 <= nums[i] <= 1000
// -107 <= k <= 107

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    int k = 2;
    unordered_map<int, int> hashmap;

    hashmap.insert({0, 1});

    int prefixSum = 0;
    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        prefixSum += nums[i];
        int check = prefixSum - k;
        count += hashmap[check];
        hashmap[prefixSum]++;
    }

    cout << count;
}