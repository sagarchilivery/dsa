// Example 1:

// Input: flowerbed = [1,0,0,0,1], n = 1
// Output: true
// Example 2:

// Input: flowerbed = [1,0,0,0,1], n = 2
// Output: false

// Constraints:

// 1 <= flowerbed.length <= 2 * 104
// flowerbed[i] is 0 or 1.
// There are no two adjacent flowers in flowerbed.
// 0 <= n <= flowerbed.length

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> flowerbed = {1, 0, 0, 0, 0};
    int n = 2;
    int size = flowerbed.size();
    int counter = 0;

    for (int i = 0; i < size; i++)
    {
        if (flowerbed[i] != 1)
        {
            if (flowerbed[max(0, i - 1)] == 0 && flowerbed[min(size - 1, i + 1)] == 0)
            {
                flowerbed[i] = 1;
                counter++;
            }
        }
    }
    if (counter == n)
    {
        cout << "Perfect";
    }
    else
    {
        cout << "False";
    }
}