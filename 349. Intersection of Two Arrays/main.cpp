// Example 1:

// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]
// Example 2:

// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [9,4]
// Explanation: [4,9] is also accepted.

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

// int main()
// {
//     vector<int> nums1 = {4, 9, 5};
//     vector<int> nums2 = {9, 4, 9, 8, 4};
//     sort(nums1.begin(), nums1.end());
//     sort(nums2.begin(), nums2.end());
//     int n = nums1.size();
//     int m = nums2.size();
//     int i = 0, j = 0;

//     unordered_set<int> st;

//     while (i < n && j < m)
//     {
//         if (nums1[i] == nums2[j])
//         {
//             st.insert(nums1[i]);
//             i++;
//             j++;
//         }
//         else if (nums1[i] > nums2[j])
//         {
//             j++;
//         }
//         else
//         {
//             i++;
//         }
//     }

//     for (int item : st)
//     {
//         cout << "Item -> " << item << endl;
//     }
// }

// Approach 2-> Efficent way

int main()
{
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};

    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> result;

    for (int item : nums2)
    {
        if (set1.find(item) != set1.end())
        {
            result.insert(item);
        }
    }

    for (int i : result)
    {
        cout << "The intersecting elements are => " << i << endl;
    }
}
