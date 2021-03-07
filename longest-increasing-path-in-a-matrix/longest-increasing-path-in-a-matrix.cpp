class Solution {
public:
    int M;
    int N;
    vector<vector<int>> dirs = {{1,0}, {-1,0}, {0,1}, {0,-1}};
    
    int dfs(vector<vector<int>>& matrix, int ii, int jj, vector<vector<int>>& cache) {
        if (cache[ii][jj] != -1)
            return cache[ii][jj];
        int maxlen = 0;
        for (auto dir : dirs) {
            int nx = ii + dir[0];
            int ny = jj + dir[1];
            if (nx < 0 || nx >= M || ny <0 || ny >= N ||
                matrix[nx][ny] <= matrix[ii][jj]) 
                continue;
            int len = 1 + dfs(matrix, nx, ny, cache);
            maxlen = max(len, maxlen);
        }
        cache[ii][jj] = maxlen;
        return maxlen;
    }
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        
        int m = matrix.size(); M = m;
        if (m==0)
            return 0;
        int n = matrix[0].size(); N = n;
        
        vector<vector<int>> cache(m, vector<int>(n, -1));
        
        int result = 0;
        
        for (int ii = 0; ii < m; ii++) {
            for (int jj = 0; jj < n; jj++) {
                result = max(result, 1 + dfs(matrix, ii, jj, cache));        
            }
        }
        return result;
    }
};