class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        vector<vector<int>> dirs {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> visited(m, vector<int> (n, -1));
        queue<vector<int>> q; // [x, y, keys, step]
        q.push({0, 0, k, 0});
        while (!q.empty()) {
            auto t = q.front(); q.pop();
            int i = t[0], j = t[1], key = t[2], step = t[3];
            if (i == m - 1 && j == n - 1) {
                return step;
            }
            for (auto& d : dirs) {
                int x = i + d[0], y = j + d[1];
                if (x >= 0 && y >= 0 && x < m && y < n && key - grid[x][y] > visited[x][y]) {
                    visited[x][y] = key - grid[x][y]; // key - grid[x][y] means the remaining key after going to this cell
                    q.push({x, y, key - grid[x][y], step + 1});
                }
            }
        }
        return -1;
    }
};