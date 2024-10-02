#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int> &nums, int start, int end)
{
    while (start <= end)
    {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    int n = nums.size();

    k = k % n; // In case k is larger than n

    // Reverse entire vector
    reverse(nums, 0, n - 1); //     [7, 6, 5, 4, 3, 2, 1]

    // Reverse the first K elements
    reverse(nums, 0, k - 1); //     [5, 6, 7, 4, 3, 2, 1]

    // Reverse the remaining elements
    reverse(nums, k, n - 1); //   [5, 6, 7, 1, 2, 3, 4]

    for (int i : nums)
    {
        cout << i << " ";
    }
}