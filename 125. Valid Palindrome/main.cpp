#include <iostream>
using namespace std;

int main()
{
    string s = "A man, a plan, a canal: Panama";
    int start = 0;
    int end = s.size() - 1;
    bool flag = true;
    while (start <= end)
    {
        if (!isalnum(s[start]))
        {
            start++;
            continue;
        }
        if (!isalnum(s[end]))
        {
            end--;
            continue;
        }
        if (tolower(s[start]) != tolower(s[end]))
        {
            cout << "Not a palindrome";
            flag = false;
            break;
        }
        else
        {
            start++;
            end--;
        }
    }
    if (flag)
    {
        cout << "Palindrome!";
    }
}