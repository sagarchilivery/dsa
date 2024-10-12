// Example 1:

// Input: num = 240, k = 2
// Output: 2
// Explanation: The following are the substrings of num of length k:
// - "24" from "240": 24 is a divisor of 240.
// - "40" from "240": 40 is a divisor of 240.
// Therefore, the k-beauty is 2.
// Example 2:

// Input: num = 430043, k = 2
// Output: 2
// Explanation: The following are the substrings of num of length k:
// - "43" from "430043": 43 is a divisor of 430043.
// - "30" from "430043": 30 is not a divisor of 430043.
// - "00" from "430043": 0 is not a divisor of 430043.
// - "04" from "430043": 4 is not a divisor of 430043.
// - "43" from "430043": 43 is a divisor of 430043.
// Therefore, the k-beauty is 2.

#include <iostream>
#include <vector>

using namespace std;

bool checker(string num, int n)
{

    if (n == 0)
        return false;

    if (num == "0" || num[0] == '0')
    {
        return false;
    }

    int n1 = stoi(num);

    if (n % n1 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num = 430043, k = 2, count = 0;

    string s1 = to_string(num);

    for (int i = 0; i <= s1.length() - k; i++)
    {
        string s2 = s1.substr(i, k);
        if (checker(s2, num))
        {
            count++;
        }
    }

    cout << "Count -> " << count << endl;
}
