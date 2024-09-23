#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

// Approach 1
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 4;

    for (vector<int>::iterator i = arr.begin(); i <= arr.end() - 1; ++i)
    {
        for (vector<int>::iterator j = i + 1; j <= arr.end(); ++j)
        {
            if (*i + *j == target)
            {

                cout << "[" << distance(arr.begin(), i) << " " << distance(arr.begin(), j) << "]";

                return 1;
            }
        }
    }
    return 0;
}