// Example 1:

// Input: nums = [3,6,9,1]
// Output: 3

// Explanation: The sorted form of the array is [1,3,6,9], either (3,6) or (6,9) has the maximum difference 3.

// Example 2:
// Input: nums = [10]
// Output: 0
// Explanation: The array contains less than 2 elements, therefore return 0.

// Constraints:
// 1 <= nums.length <= 105
// 0 <= nums[i] <= 109

#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
// #include <algorithm>

using namespace std;

int main()
{
    // vector<int> nums = {3, 6, 9, 1, 4, 7, 2, 8, 5, 10};
    vector<int> nums = {3, 6, 9, 1};

    int n = nums.size();

    if (n < 2)
    {
        cout << "Maximum gap --> 0" << endl;
        return 0;
    }

    int max_value = nums[0], min_value = nums[0], maximum_gap = 0;

    for (int i = 1; i < n; i++)
    {
        max_value = max(max_value, nums[i]);
        min_value = min(min_value, nums[i]);
    }

    int bucket_size = max(1, (max_value - min_value) / (n - 1));
    int no_of_buckets = (max_value - min_value) / bucket_size + 1;

    vector<vector<int>> buckets(no_of_buckets);

    for (int num : nums)
    {
        int index = (num - min_value) / bucket_size;
        buckets[index].push_back(num);
    }

    int previous_bucket_max = 0;

    for (auto &bucket : buckets)
    {
        if (bucket.empty())
            continue;

        int current_bucket_max = bucket[0], current_bucket_min = bucket[0];
        for (int num : bucket)
        {
            current_bucket_max = max(current_bucket_max, num);
            current_bucket_min = min(current_bucket_min, num);
        }

        maximum_gap = max(maximum_gap, current_bucket_min - previous_bucket_max);
        previous_bucket_max = current_bucket_max;
    }

    cout << "Maximum gap --> " << maximum_gap;

    return 0;
}
