// Example 1:
// Input: n = 5
// Output: 2
// Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.

// Example 2:
// Input: n = 7
// Output: 0
// Explanation: 7 is "111" in binary, with complement "000" in binary, which is 0 in base-10.

// Example 3:
// Input: n = 10
// Output: 5
// Explanation: 10 is "1010" in binary, with complement "0101" in binary, which is 5 in base-10.

#include <iostream>
#include <vector>

using namespace std;

// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     vector<int> arr;
//     int decimal = 0;

//     while (num != 0)
//     {
//         arr.push_back(num % 2 == 1 ? 0 : 1);
//         num >>= 1;
//     }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         decimal = decimal + (arr[i] << i);
//     }
//     cout << endl;
//     cout << "Decimal -> " << decimal;
// }

/*
1. Create binary
1. Compliment of binary
2. create a mask
3. AND of compliment & mask
4. convert it to decimal


*/

int main()
{
    int n;
    cout << "Enter the number -> ";
    cin >> n;
    int complement = ~n;
    int mask = 0;

    while (n != 0)
    {
        mask = (mask << 1) | 1;
        n >>= 1;
    }

    int ans = complement & mask;

    cout << ans;
}