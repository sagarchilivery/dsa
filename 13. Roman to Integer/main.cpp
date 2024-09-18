// Example 1:

// Input: s = "III"
// Output: 3
// Explanation: III = 3.
// Example 2:

// Input: s = "LVIII"
// Output: 58
// Explanation: L = 50, V= 5, III = 3.
// Example 3:

// Input: s = "MCMXCIV"
// Output: 1994
// Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    string input = "LVIII";
    int count = 0;

    for (int i = 0; i < input.size(); i++)
    {
        switch (input[i])
        {
        case 'I':
            if (i != input.size() - 1 && (input[i + 1] == 'V' || input[i + 1] == 'X'))
            {
                count += input[i + 1] == 'V' ? 4 : 9;
                i++;
            }
            else
            {
                count += 1;
            }
            break;

        case 'V':

            count += 5;
            break;

        case 'X':

            if (i != input.size() - 1 && (input[i + 1] == 'L' || input[i + 1] == 'C'))
            {
                count = input[i + 1] == 'L' ? count + 40 : count + 90;
                i++;
            }
            else
            {
                count += 10;
            }
            break;

        case 'L':
            count += 50;
            break;

        case 'C':
            if (i != input.size() - 1 && (input[i + 1] == 'D' || input[i + 1] == 'M'))
            {

                count = input[i + 1] == 'C' ? count + 400 : count + 900;
                i++;
            }
            else
            {
                count += 100;
            }

            break;

        case 'D':
            count += 500;
            break;

        case 'M':
            count += 1000;
            break;

        default:
            break;
        }
    }

    cout << count;
}