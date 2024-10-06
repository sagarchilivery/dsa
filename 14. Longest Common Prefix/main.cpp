// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> strs = {"flower", "flow", "flight"};

    sort(strs.begin(), strs.end());

    string first = strs[0];
    string last = strs[strs.size() - 1];
    string result = "";

    for (int i = 0; i < min(first.length(), last.length()); i++)
    {
        if (first[i] != last[i])
        {
            break;
        }
        else
        {
            result += first[i];
        }
    }

    cout << "Result -> " << result;
}
