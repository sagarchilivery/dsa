// Given two strings s and t, return true if t is an
// anagram
//  of s, and false otherwise.

// Example 1:

// Input: s = "anagram", t = "nagaram"

// Output: true

// Example 2:

// Input: s = "rat", t = "car"

// Output: false

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    string s = "anagram", t = "nagaram";
    unordered_map<char, int> map1;
    unordered_map<char, int> map2;

    for (char text : s)
    {
        map1[text]++;
    }

    for (char text : t)
    {
        map2[text]++;
    }

    if (map1 == map2)
    {
        cout << "Anagram Found";
    }
    else
    {
        cout << "Anagram Not Found";
    }
    cout << endl;
}