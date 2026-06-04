/*
Problem: Reshape the Matrix
LeetCode: 566

Time Complexity: O(m * n)
Space Complexity: O(r * c)
*/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();

        // Reshape possible nahi hai
        if (m * n != r * c)
            return mat;

        vector<vector<int>> result(r, vector<int>(c));

        for (int i = 0; i < m * n; i++) {
            result[i / c][i % c] = mat[i / n][i % n];
        }

        return result;
    }
};
