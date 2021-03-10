#define GATE 0
#define WALL -1
typedef pair<int,int> pint;
class Solution {
public:
    vector<vector<int>> dirs = {{0,1}, {1,0}, {-1,0}, {0,-1}};
    
    queue<pint> q;
    void wallsAndGates(vector<vector<int>>& rooms) {
        // collect all gates
        for (int i = 0;  i < rooms.size(); i++) {
            for (int j = 0; j < rooms[0].size(); j++) {
                if (rooms[i][j] == GATE) {
                    q.push(make_pair(i,j));
                }
            }
        }
        
        while(!q.empty()) {
            auto curr = q.front();
            q.pop();
            int row = curr.first;
            int col = curr.second;
            
            int r,c;
            for (auto dir : dirs) {
                r = row + dir[0];
                c = col + dir[1];
                if(r < 0 or c < 0 or r >= rooms.size() or c >= rooms[0].size() or
                   (rooms[r][c] >= -1 and rooms[r][c] < INT_MAX))
                    continue;
                q.push(make_pair(r,c));
                rooms[r][c] = 1 + rooms[row][col];
            }
        }
    }
};