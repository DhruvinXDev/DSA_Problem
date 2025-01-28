leet code problem 73. set matrix zeroes

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<pair<int, int>> res;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    res.push_back({i, j});
                }
            }
        }
        for (const auto& z : res) {
        int x = z.first;
        int y = z.second;
            for (int i = 0; i < n; i++) {
                matrix[i][y] = 0;
            }
            for (int j = 0; j < m; j++) {
                matrix[x][j] = 0;
            }
        }
    }
};
