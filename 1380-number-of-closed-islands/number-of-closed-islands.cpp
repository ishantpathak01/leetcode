class Solution {
public:
    int m,n;
    bool dfs(vector<vector<int>>& grid, int r, int c) {
        if (r <0 || r >=m || c <0 || c >=n) {
            return false;
        }
        if (grid[r][c] == 1) {
            return true;
        }
        grid[r][c] = 1;
        bool l_closed = dfs(grid, r, c - 1);
        bool r_closed = dfs(grid, r, c + 1);
        bool u_closed = dfs(grid, r - 1, c);
        bool d_closed = dfs(grid, r + 1, c);
        return l_closed && r_closed && u_closed && d_closed;
    }
    int closedIsland(vector<vector<int>>& grid) {
         m = grid.size();
         n = grid[0].size();
        int c = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) {
                    if (dfs(grid, i, j) == true) {
                        c++;
                    }
                }
            }
        }
        return c;
    }
};
