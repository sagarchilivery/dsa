#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    int i = 0;
    int j = 1;

    while (j < nums.size())
    {
        if (nums[i] != 0)
        {
            i++;
            j++;
        }
        else if (nums[j] == 0)
        {
            j++;
        }
        else if (nums[i] == 0 && nums[j] != 0)
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
    }

    for (int i : nums)
    {
        cout << i << " ";
    }
}