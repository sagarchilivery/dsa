// Example 1:

// Input: numbers = [2,7,11,15], target = 9
// Output: [1,2]
// Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].
// Example 2:

// Input: numbers = [2,3,4], target = 6
// Output: [1,3]
// Explanation: The sum of 2 and 4 is 6. Therefore index1 = 1, index2 = 3. We return [1, 3].
// Example 3:

// Input: numbers = [-1,0], target = -1
// Output: [1,2]
// Explanation: The sum of -1 and 0 is -1. Therefore index1 = 1, index2 = 2. We return [1, 2].

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers = {2, 7, 11, 15};
    vector<int> result;
    int target = 9;

    int start = 0, end = numbers.size() - 1;

    while (start < end)
    {
        int sum = numbers[start] + numbers[end];
        if (sum == target)
        {
            result.push_back(start + 1);
            result.push_back(end + 1);
            break;
        }

        else if (sum > target)
        {
            end--;
        }
        else
        {
            start++;
        }
    }

    cout << "[";
    for (int i : result)
    {
        cout << i << " ";
    }
    cout << "]" << endl;
}