#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    int temp = num;
    int reverse = 0;

    while (temp != 0)
    {

        if (num < 0 || num != 0 && num % 10 == 0)
        {
            cout << "Not a Pallindrome";
        }

        if (reverse > INT_MAX / 10 || reverse < INT_MIN / 10)
        {
            cout << "Not Pallindrome";
            break;
        }
        int digit = temp % 10;
        reverse = (reverse * 10) + digit;
        temp /= 10;
    }

    if (reverse == num)
    {

        cout << "Pallindrome";
    }
    else
    {

        cout << "Not Pallindrome";
    }
}