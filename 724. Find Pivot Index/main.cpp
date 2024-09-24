#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    int left_sum = 0;
    int total = accumulate(nums.begin(), nums.end(), 0);
    bool found = false;
    for (int i = 0; i < nums.size(); i++)
    {
        int right_sum = total - left_sum - nums[i];
        if (right_sum == left_sum)
        {
            found = true;
            cout << "Pivot found at index -> " << i;
            break;
        }
        left_sum += nums[i];
    }

    if (!found)
    {
        cout << "Not found :(";
    }
}