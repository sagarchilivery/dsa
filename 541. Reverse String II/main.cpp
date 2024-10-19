// Example 1:
// Input: s = "abcdefg", k = 2
// Output: "bacdfeg"

// Example 2:
// Input: s = "abcd", k = 2
// Output: "bacd"

// Example 3:
// Input: s ="hyzqyljrnigxvdtneasepfahmtyhlohwxmkqcdfehybknvdmfrfvtbsovjbdhevlfxpdaovjgunjqlimjkfnqcqnajmebeddqsgl", k = 39
// Output: "fdcqkmxwholhytmhafpesaentdvxginrjlyqzyhehybknvdmfrfvtbsovjbdhevlfxpdaovjgunjqllgsqddebemjanqcqnfkjmi"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s = "abcdefg";
    int k = 2;

    int n = s.length();

    int index = 0;
    while (index < n)
    {
        int start = index;
        int end = min(index + k - 1, n - 1);

        while (start <= end)
        {
            swap(s[start], s[end]);
            start++;
            end--;
        }

        index += 2 * k;
    }

    cout << "String - > " << s << endl;
}