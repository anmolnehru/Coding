#include "vector"
#include "unordered_map"
#include "unordered_set"
#include "set"

using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> out;
        set<vector<int>> setout;

        unordered_map<int, int> lookup;
        unordered_set<int> numset;
        int i = 0;
        for (auto num : nums) {
            lookup[num] = i++;
            numset.insert(num);
        }
        int targetidx;
        int target;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++) {
                target = -1*(nums[i] + nums[j]);
                if (numset.contains(target) && lookup.find(target) != lookup.end()) {
                    targetidx = lookup[target];
                    if (targetidx != i && targetidx != j) {
                        vector<int> tmp = {nums[i],nums[j],nums[targetidx]};
                        sort(tmp.begin(), tmp.end());
                        setout.insert(tmp); // de-duper unqiue ensurer
                    }
                }
            }
        }

        for (auto setidx : setout) {
            out.push_back(setidx);
        }
        return out;
    }
};
