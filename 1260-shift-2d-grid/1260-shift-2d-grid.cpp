class Solution {
private:
    void shiftRecursive(vector<vector<int>>& current, vector<vector<int>>& next, int m, int n, int k) {
        if (k == 0) return;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (j + 1 < n) {
                    next[i][j + 1] = current[i][j];
                } else if (i + 1 < m) {
                    next[i + 1][0] = current[i][j];
                } else {
                    next[0][0] = current[i][j];
                }
            }
        }
        shiftRecursive(next, current, m, n, k - 1);
    }

public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int totalElements = m * n;
        k = k % totalElements;
        if (k == 0) return grid;
        vector<vector<int>> nextGrid = grid;
        shiftRecursive(grid, nextGrid, m, n, k);
        return (k % 2 == 1) ? nextGrid : grid;
    }
};