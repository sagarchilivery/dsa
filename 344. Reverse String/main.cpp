// Example 1:

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]
// Example 2:

// Input: s = ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]
 
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {'H', 'a', 'n', 'n', 'a', 'h'};
    int start = 0;
    int end = vec.size() - 1;
    while (start <= end)
    {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }

    for (char ch : vec)
    {
        cout << ch << " ";
    }
}