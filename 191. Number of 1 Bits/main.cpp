
// Example 1:
// Input: n = 11
// Output: 3
// Explanation:
// The input binary string 1011 has a total of three set bits.

// Example 2:
// Input: n = 128
// Output: 1
// Explanation:
// The input binary string 10000000 has a total of one set bit.

// Example 3:
// Input: n = 2147483645
// Output: 30
// Explanation:
// The input binary string 1111111111111111111111111111101 has a total of thirty set bits.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Approach 1 ->Brute force
int main()
{
    int num = 1234;
    vector<int> arr;

    while (num != 0)
    {
        arr.push_back(num % 2);
        num = num / 2;
    }

    cout << "Before reverse -> ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }

    cout << endl;
    cout << "After reverse  -> ";

    reverse(arr.begin(), arr.end());
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] == 1 && ++count;
        cout << arr[i];
    }
    cout << endl
         << "Count -> " << count;
}