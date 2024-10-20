// Example 1:

// Input: s = "aba"
// Output: true
// Example 2:

// Input: s = "abca"
// Output: true
// Explanation: You could delete the character 'c'.
// Example 3:

// Input: s = "abc"
// Output: false

// Constraints:

// 1 <= s.length <= 105
// s consists of lowercase English letters.

#include <iostream>
#include <vector>

using namespace std;

bool check(string &s, int start, int end)
{
    while (start <= end)
    {
        if (s[start] == s[end])
        {
            start++;
            end--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "abca";
    int start = 0, end = s.length() - 1;
    bool flag = false;

    while (start <= end)
    {
        // if (!flag)
        // {
        if (s[start] != s[end])
        {
            flag = check(s, start + 1, end) || check(s, start, end - 1);
            if (flag)
            {
                break;
            }
        }
        // }
        start++;
        end--;
    }

    cout << flag << endl;
}
