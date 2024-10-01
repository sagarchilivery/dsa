#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    vector<int> new_nums;

    for (int i : nums)
    {
        if (i != 0)
            new_nums.push_back(i);
    }

    int delta = nums.size() - new_nums.size();
    while (delta > 0)
    {
        new_nums.push_back(0);
        delta--;
    }

    for (int i : new_nums)
    {
        cout << i << " ";
    }
}