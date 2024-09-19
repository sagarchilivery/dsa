#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>

using namespace std;

int main()
{
    vector<int> arr = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};

    unordered_map<int, int> occurence;

    for (int i : arr)
    {
        occurence[arr[i]]++;
    }

    set<int> frequency;

    for (auto element : occurence)
    {
        if (frequency.find(element.second) != frequency.end())
        {
            cout << "Failed for uniqness";
            break;
        }

        frequency.insert(element.second);
    }

    cout << "Passed for uniqueness";
}