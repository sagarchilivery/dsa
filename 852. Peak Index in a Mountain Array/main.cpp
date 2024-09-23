#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {0, 1, 2, 10, 5, 2};
    int temp = 0;
    int index = -1;

    for (int i = 0; i <= arr.size(); i++)
    {
        if (temp < arr[i])
        {
            temp = arr[i];
            index = i;
        }
    }

    cout << "The highest value is at -> " << index;
}