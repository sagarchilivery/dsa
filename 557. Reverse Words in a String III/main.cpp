// Example 1:

// Input: s = "Let's take LeetCode contest"
// Output: "s'teL ekat edoCteeL tsetnoc"
// Example 2:

// Input: s = "Mr Ding"
// Output: "rM gniD"

// Constraints:

// 1 <= s.length <= 5 * 104
// s contains printable ASCII characters.
// s does not contain any leading or trailing spaces.
// There is at least one word in s.
// All the words in s are separated by a single space.

#include <iostream>

using namespace std;

int main()
{
    string s = "Let's take Leetcode contest";
    int index = 0;
    for (int i = 0; i <= s.length(); i++)
    {
        if (s[i] == ' ' || i == s.length())
        {
            int start = index;
            int end = i - 1;

            while (start <= end)
            {
                swap(s[start], s[end]);
                start++;
                end--;
            }

            index = i + 1;
        }
    }

    cout << "The String is -> " << s << endl;
}