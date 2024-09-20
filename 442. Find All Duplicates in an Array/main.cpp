

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    unordered_map<int, int> mp;
    vector<int> newNums;

    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }

    for (auto temp : mp)
    {
        if (temp.second == 2)
        {
            newNums.push_back(temp.first);
        }
    }

    for (int i = 0; i < newNums.size(); i++)
    {
        cout << newNums[i] << " ";
    }

    // for()

    return 0;
}