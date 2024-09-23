#include <iostream>
#include <vector>

using namespace std;

int search_via_binary(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}

int main()
{
    vector<int> arr = {0, 1, 2, 3, 10, 5, 2};

    cout << "The highest value is at -> " << search_via_binary(arr);
}