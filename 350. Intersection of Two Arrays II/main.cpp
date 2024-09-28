// Example 1:

// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2,2]
// Example 2:

// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [4,9]
// Explanation: [9,4] is also accepted.

#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector<int> nums1 = {9, 4, 9, 8, 4, 3, 4, 5, 7, 1};
    vector<int> nums2 = {4, 9, 5, 2, 3, 5, 6, 4, 2, 4, 4};
    unordered_map<int, int> hashmap;
    vector<int> result;

    for (int i = 0; i < nums1.size(); i++)
    {
        hashmap[nums1[i]]++;
    }

    for (int item : nums2)
    {
        if (hashmap.find(item) != hashmap.end())
        {
            result.push_back(item);
            hashmap[item]--;
        }

        if (hashmap[item] == 0)
        {
            hashmap.erase(item);
        }
    }

    for (int item : result)
    {
        cout << "Intersection of arrays are => " << item << endl;
    }
}