// Example 1:

// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
// Example 2:

// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: In this case, no transactions are done and the max profit = 0.

// Constraints:

// 1 <= prices.length <= 105
// 0 <= prices[i] <= 104

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> prices = {3, 2, 6, 5, 0, 3};
    int max_profit = 0, buy_price = prices[0];

    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] < buy_price)
        {
            buy_price = prices[i];
        }
        else
        {
            max_profit = max(max_profit, prices[i] - buy_price);
        }
    }

    cout << "The profit margin is  ---> " << max_profit << endl;
}