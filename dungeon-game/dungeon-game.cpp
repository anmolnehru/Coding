class Solution {
public:
    int calculateMinimumHP(vector<vector<int>> &dungeon) {
        int M = dungeon.size();
        int N = dungeon[0].size();

        vector<vector<int>> need(M + 1, vector<int>(N + 1, INT_MAX));
        
        // init
        need[M][N - 1] = 1;
        need[M - 1][N] = 1;
        
        // main loop
        for (int i = M - 1; i >= 0; i--) {
            for (int j = N - 1; j >= 0; j--) {
                need[i][j] = min(need[i + 1][j], need[i][j + 1]) - dungeon[i][j];
                if(need[i][j] <= 0)
                    need[i][j] = 1; // I don't need anything from my ancestors. I'm self sufficient.
            }
        }
        return need[0][0];
    }
};