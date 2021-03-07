class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> result;
        int m = newInterval[0];
        int M = newInterval[1];
        bool placed = false;
        for(const auto&val : intervals){
            if(m <= val[1] && M >= val[0]){ //intersection
                m = min(m,val[0]);
                M = max(M,val[1]);
            }
            else if(m > val[1]){
                result.emplace_back(val);
            }
            else if(M < val[0]){
                if(!placed){
                    result.emplace_back(vector<int>({m,M}));
                    placed = true;
                }
                result.emplace_back(val);
            }
        }
        if(!placed){
            result.emplace_back(vector<int>({m,M}));
            placed = true;
        }
        
        return result;
    }
};