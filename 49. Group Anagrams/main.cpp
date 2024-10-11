// Example 1:

// Input: strs = ["eat","tea","tan","ate","nat","bat"]

// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

// Explanation:

// There is no string in strs that can be rearranged to form "bat".
// The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
// The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.
// Example 2:

// Input: strs = [""]

// Output: [[""]]

// Example 3:

// Input: strs = ["a"]

// Output: [["a"]]

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    unordered_map<string, vector<string>> hashmap;

    vector<vector<string>> result;

    for (string text : strs)
    {
        string temp = text;
        sort(text.begin(), text.end());
        hashmap[text].push_back(temp);
    }

    for (auto itr = hashmap.begin(); itr != hashmap.end(); itr++)
    {
        result.push_back(itr->second);
    }

    for (auto yo : result)
    {
        for (auto yoo : yo)
        {
            cout << yoo << endl;
        }
    }
}
