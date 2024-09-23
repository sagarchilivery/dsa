

#include <iostream>
#include <vector>

using namespace std;

int first_occurence(vector<int> vec, int element)
{
    int start = 0;
    int end = vec.size() - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (vec[mid] == element)
        {
            ans = mid;
            end = mid - 1;
        }

        else if (vec[mid] > element)
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int last_occurence(vector<int> vec, int element)
{
    int start = 0;
    int end = vec.size() - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (vec[mid] == element)
        {
            ans = mid;
            start = mid + 1;
        }

        else if (vec[mid] > element)
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int element;
    vector<int> vec = {1, 2, 3, 3, 3, 3, 3, 3, 3, 4, 5, 6, 7, 8, 9};
    cout << "Enter the element to search -> ";
    cin >> element;
    int output1 = first_occurence(vec, element);
    cout << "The element first found at index -> " << output1 << endl;
    int output2 = last_occurence(vec, element);
    cout << "The element last found at index -> " << output2;
}
