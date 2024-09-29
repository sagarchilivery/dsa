// Example 1:

// Input: aliceSizes = [1,1], bobSizes = [2,2]
// Output: [1,2]
// Example 2:

// Input: aliceSizes = [1,2], bobSizes = [2,3]
// Output: [1,2]
// Example 3:

// Input: aliceSizes = [2], bobSizes = [1,3]
// Output: [2,3]

#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

/*

I have followed this formula

    A - x + y = B + x - y
    A - B = 2x - 2y => Delta or difference
    x - y = (A - B) / 2 => line no.46


*/
int main()
{
    vector<int> A = {1, 1};
    vector<int> B = {2, 2};
    unordered_set<int> hashset;
    int a_sum = 0;
    int b_sum = 0;

    for (int i : A)
        a_sum += i;
    for (int j : B)
    {
        hashset.insert(j);
        b_sum += j;
    }

    int delta = (a_sum - b_sum) / 2;

    for (int x : A)
    {
        if (hashset.find(x - delta) != hashset.end())
        {
            cout << "[" << x << ", " << x - delta << "]";
            break;
        }
    }

    return 0;
}