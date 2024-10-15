// Example 1:

// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.
// Example 2:

// Input: haystack = "leetcode", needle = "leeto"
// Output: -1
// Explanation: "leeto" did not occur in "leetcode", so we return -1.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string haystack = "sadbutsad";
    string needle = "sad";
    bool flag = false;

    string tester = "";

    for (int i = 0; i < needle.length(); i++)
    {
        tester += haystack[i];
    }
    if (tester == needle)
    {
        cout << "Found at 0";
        flag = true;
    }

    if (!flag)
    {
        for (int i = needle.length(); i < haystack.length(); i++)
        {
            tester = tester.substr(1) + haystack[i];
            if (tester == needle)
            {
                cout << "Found at ->" << i - needle.length() + 1;
                flag = true;
                break;
            }
        }
    }
}