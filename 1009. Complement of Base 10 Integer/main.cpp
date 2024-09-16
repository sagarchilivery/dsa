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

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    vector<int> arr;
    int decimal = 0;

    while (num != 0)
    {
        arr.push_back(num % 2);
        num >>= 1;
    }

    cout << "Before complement ->";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }

    cout << endl;
    cout << "After complement ->";
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] == 1 ? arr[i] = 0 : arr[i] = 1;
        cout << arr[i];
    }

    // Decimal conversion
    for (int i = 0; i < arr.size(); i++)
    {
        decimal = decimal + (arr[i] << i);
    }
    cout << endl;
    cout << "Decimal -> " << decimal;
}
