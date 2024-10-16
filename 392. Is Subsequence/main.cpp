// Example 1:

// Input: s = "abc", t = "ahbgdc"
// Output: true
// Example 2:

// Input: s = "axc", t = "ahbgdc"
// Output: false

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s = "abc", t = "ahbgdc";

    int start = 0;
    int end = t.length();
    int counter = 0;
    while (start < end)
    {
        if (t[start] == s[counter])
        {
            counter++;
        }
        start++;
    }

    if (counter == s.length())
    {
        cout << "Yoooooo it passed";
    }
    else
    {
        cout << "bruhhhhh F";
    }
}