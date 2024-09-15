#include <iostream>
#include <cstdint> // For int16_t

using namespace std;

int main()
{
    int32_t num = 4351214; // signed 32 bits int
    int32_t revNum = 0;
    int sign = num < 0 ? -1 : 1;
    num = abs(num);

    while (num != 0)
    {
        int digit = num % 10;
        if (num > (INT32_MAX - digit) / 10)
        {
            cout << "Invalid number";
            return 0;
        }
        revNum = (revNum * 10) + digit;
        num /= 10;
    }

    cout << revNum * sign;
}
