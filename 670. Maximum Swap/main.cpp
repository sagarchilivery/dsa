// You are given an integer num. You can swap two digits at most once to get the maximum valued number.
// Return the maximum valued number you can get.

// Example 1:
// Input: num = 2736
// Output: 7236
// Explanation: Swap the number 2 and the number 7.

// Example 2:
// Input: num = 9973
// Output: 9973
// Explanation: No swap.

// Constraints:

// 0 <= num <= 108

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num = 27362;
    string numStr = to_string(num);
    int n = numStr.length();

    vector<int> last(10, -1);

    for (int i = 0; i < n; i++)
    {
        last[numStr[i] - '0'] = i;
    }

    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;

    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        if (!flag)
        {
            for (int d = 9; d > numStr[i] - '0'; --d)
            {
                if (last[d] > i)
                {
                    swap(numStr[i], numStr[last[d]]);
                    cout << "Num -> " << stoi(numStr) << endl;
                    flag = true;
                    break;
                }
            }
        }
    }

    if (!flag)
    {
        cout << "Num -> " << num << endl;
    }
}