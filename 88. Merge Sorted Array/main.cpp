#include <iostream>
#include <vector>

using namespace std;

void merge_nums(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int end = nums1.size() - 1;
    if (n == 0)
        return;
    while (m > 0 && n > 0)
    {
        if (nums1[m - 1] < nums2[n - 1])
        {
            nums1[end] = nums2[n - 1];
            n--;
        }
        else
        {
            nums1[end] = nums1[m - 1];
            m--;
        }
        end--;
    }

    while (n > 0)
    {
        nums1[end] = nums2[n - 1];
        n--;
        end--;
    }
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    merge_nums(nums1, m, nums2, n);
    for (int i : nums1)
    {
        cout << i << " ";
    }
}