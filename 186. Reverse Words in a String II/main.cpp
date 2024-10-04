// 186. Reverse Words in a String II
// Given a character array s, reverse the order of the words.

// A word is defined as a sequence of non-space characters. The words in s will be separated by a single space.

// Your task is to modify the input array in-place.

// Example 1:
// Input: s = ["t","h","e"," ","s","k","y"," ","i","s"," ","b","l","u","e"]

// Output: ["b","l","u","e"," ","i","s"," ","s","k","y"," ","t","h","e"]

// Example 2:
// Input: s = ["a"]

// Output: ["a"]

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> s = {'t', 'h', 'e', ' ', 's', 'k', 'y', ' ', 'i', 's', ' ', 'b', 'l', 'u', 'e'};
    int start = 0;
    int end = s.size() - 1;
    cout << "Before -> ";
    for (char ch : s)
    {
        cout << ch;
    }
    while (start <= end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }

    cout << endl;

    int p1 = 0;
    int p2 = 1;
    while (p2 <= s.size())
    {
        if (p2 == s.size() || s[p2] == ' ')
        {
            int new_p1 = p1;
            int new_p2 = p2 - 1;
            while (new_p1 < new_p2)
            {
                swap(s[new_p1], s[new_p2]);
                new_p1++;
                new_p2--;
            }
            p1 = p2 + 1;
        }
        p2++;
    }

    cout << "After -> ";

    for (char ch : s)
    {
        cout << ch;
    }
}
