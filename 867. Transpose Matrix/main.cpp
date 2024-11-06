// Example 1:

// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[1,4,7],[2,5,8],[3,6,9]]
// Example 2:

// Input: matrix = [[1,2,3],[4,5,6]]
// Output: [[1,4],[2,5],[3,6]]
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<vector<int>> transpose(vector<vector<int>> &matrix)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<vector<int>> transposed(cols, vector<int>(rows));

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                transposed[j][i] = matrix[i][j];
            }
        }

        return transposed;
    }
};

int main()
{
    Solution solution;

    // Example 2D matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // Transpose the matrix
    vector<vector<int>> transposedMatrix = solution.transpose(matrix);

    // Print the original matrix
    cout << "Original Matrix:" << endl;
    for (const auto &row : matrix)
    {
        for (const auto &elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }

    // Print the transposed matrix
    cout << "Transposed Matrix:" << endl;
    for (const auto &row : transposedMatrix)
    {
        for (const auto &elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
