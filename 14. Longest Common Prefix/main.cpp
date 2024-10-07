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

    // Approach 1
    // sort(strs.begin(), strs.end());

    // string first = strs[0];
    // string last = strs[strs.size() - 1];
    // string result = "";

    // for (int i = 0; i < min(first.length(), last.length()); i++)
    // {
    //     if (first[i] != last[i])
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         result += first[i];
    //     }
    // }

    // cout << "Result -> " << result;

    // Approach 2
    string sample = strs[0];
    int sample_length = sample.length();

    for (int i = 0; i < strs.size(); i++)
    {
        string s = strs[i];
        while (sample_length > s.length() || sample != s.substr(0, sample_length))
        {
            sample_length--;
            if (sample_length == 0)
            {
                cout << "Longest Common prefix -> \"\"";
                // break;
                return 0;
            }

            sample = sample.substr(0, sample_length);
        }
    }

    cout << "Longest Common prefix ->" << sample;
    return 0;
}
