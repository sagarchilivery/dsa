// Example 1:

// Input: s = "IceCreAm"

// Output: "AceCreIm"

// Explanation:

// The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

// Example 2:

// Input: s = "leetcode"

// Output: "leotcede"

// Constraints:

// 1 <= s.length <= 3 * 105
// s consist of printable ASCII characters.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s = "IceCreAm";
    int start = 0;
    int end = s.length() - 1;
    string vowels = "aeiouAEIOU";
    cout << "Original String -> " << s << endl;

    while (start < end)
    {
        while (start < end && vowels.find(s[start]) == string::npos)
        {
            start++;
        }

        while (start < end && vowels.find(s[end]) == string::npos)
        {
            end--;
        }

        swap(s[start], s[end]);

        start++;
        end--;
    }

    cout << "New String -> " << s << endl;
}