class Solution {
public:
    void helper(vector<vector<char>>& grid, vector<vector<bool>> &visit, int x, int y) {
        if (x < 0 or y < 0 or x >= grid.size()
            or y >= grid[0].size() or grid[x][y] == '0' or visit[x][y]) {
            return;
        }
                
        visit[x][y] = true;
        helper(grid, visit, x-1, y);
        helper(grid, visit, x, y-1);
        helper(grid, visit, x, y+1);
        helper(grid, visit, x+1, y);
    }
    void dfs(vector<vector<char>>& grid, vector<vector<bool>> &visit, int &count) {
        for (int ii = 0; ii < grid.size(); ii++) {
            for (int jj = 0; jj < grid[0].size(); jj++) {
                if (grid[ii][jj] == '1' && !visit[ii][jj]) {
                    count++;
                    helper(grid, visit, ii, jj);
                }
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> visit(n, vector<bool>(m,false));
        // memset(visit, 0, sizeof (visit));
        int count = 0;
        dfs(grid, visit, count);
        return count;
        
    }
};