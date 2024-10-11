// 1176. Diet Plan Performance

// Difficulty: Easy

// You are given an integer array calories, where calories[i] represents the calories consumed on the i-th day, and an integer k. You are also given an integer lower and an integer upper.

// A diet plan is considered successful if the total calories consumed over any consecutive sequence of k days is between lower and upper (inclusive). A diet plan is considered unsuccessful if the total calories consumed over any consecutive sequence of k days is strictly less than lower or strictly greater than upper.

// Your task is to calculate the total points that the diet plan earns. The total points are calculated as follows:

// If the total calories for any consecutive sequence of k days is less than lower, you lose 1 point.
// If the total calories for any consecutive sequence of k days is between lower and upper (inclusive), you earn 0 points.
// If the total calories for any consecutive sequence of k days is greater than upper, you gain 1 point.
// Return the total points scored.

// Example 1:
// yaml
// Copy code
// Input:
// calories = [1,2,3,4,5]
// k = 1
// lower = 3
// upper = 3

// Output:
// 0

// Explanation:
// - For day 1: 1 (below lower), lose 1 point.
// - For day 2: 2 (below lower), lose 1 point.
// - For day 3: 3 (within range [3, 3]), earn 0 points.
// - For day 4: 4 (above upper), gain 1 point.
// - For day 5: 5 (above upper), gain 1 point.

// Total points = -1 + -1 + 0 + 1 + 1 = 0.
// Example 2:
// makefile
// Copy code
// Input:
// calories = [3,2]
// k = 2
// lower = 0
// upper = 1

// Output:
// 1

// Explanation:
// - For the 2 days: 3 + 2 = 5 (above upper), gain 1 point.
// Example 3:
// makefile
// Copy code
// Input:
// calories = [6,5,0,0]
// k = 2
// lower = 1
// upper = 5

// Output:
// 0

// Explanation:
// - For the first 2 days: 6 + 5 = 11 (above upper), gain 1 point.
// - For the second 2 days: 5 + 0 = 5 (within range [1, 5]), earn 0 points.
// - For the last 2 days: 0 + 0 = 0 (below lower), lose 1 point.

// Total points = 1 + 0 - 1 = 0.
// Constraints:
// 1 <= k <= calories.length <= 10^5
// 0 <= calories[i] <= 20000
// 0 <= lower <= upper

#include <iostream>
#include <vector>

using namespace std;

int point_giver(int cal, int upper, int lower)
{

    if (cal > upper)
    {
        return 1;
    }
    if (cal < lower)
    {
        return -1;
    }
    return 0;
}

int main()
{
    vector<int> calories = {6, 5, 0, 0};
    int k = 2, lower = 1, upper = 5;

    int i = 0, total_points = 0;

    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum = sum + calories[i];
    }

    total_points = total_points + point_giver(sum, upper, lower);

    for (int i = k; i < calories.size(); i++)
    {
        sum = sum + calories[i] - calories[i - k];
    }

    total_points = total_points + point_giver(sum, upper, lower);

    cout << "Total Points are -> " << total_points << endl;
}
