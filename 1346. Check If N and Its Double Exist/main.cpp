#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
    vector<int> nums = {10, 2, 5, 3};
    unordered_set<int> set;
    bool flag = false;
    for (int i = 0; i < nums.size(); i++)
    {
        if (set.count(2 * nums[i]) > 0 || ((nums[i] % 2 == 0) && set.count(nums[i] / 2) > 0))
        {
            cout << "Found";
            flag = true;
            break;
        }
        set.insert(nums[i]);
    }
    if (!flag)
    {
        cout << "NOt found";
    }
}