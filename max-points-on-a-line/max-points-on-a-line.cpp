class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int maxv = 0;
        for (int i = 0; i < points.size(); i++) {
            unordered_map<double, int> counter;
            int dup = 1;
            int ver = 0;
            int maxlocal = 0;
            for (int j = i+1; j < points.size(); j++) {
                if (points[j][0] == points[i][0] && points[j][1] == points[i][1]) {
                    dup++;
                } else if (points[j][1] != points[i][1] && points[j][0] == points[i][0]) {
                    ver++;
                    maxlocal = max(ver, maxlocal);
                } else {
                    double slope = (double)(points[j][1] - points[i][1])/(double)(points[j][0] - points[i][0]);
                    // cout << "slope" << slope << " pivot " << points[i][0] << "," << points[i][1] << "target " << points[j][0] << "," << points[j][1] << endl;
                    counter[slope]++;
                    maxlocal = max(ver, max(maxlocal, counter[slope]));
                    cout << "{maxl, ver, counter} > " << maxlocal << " : " << ver << ":" << counter[slope] <<endl;
                }
                
            }
            maxv = max(maxv, dup+maxlocal);
        }      
        return maxv;
    }
};