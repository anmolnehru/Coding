class Solution {
public:
    
    
    int helperCount(int idx, int sum, vector<int> &nums, int &S) {
        if (idx == nums.size())
            return sum == S ? 1 : 0;
        
        return helperCount(idx+1, sum+nums[idx], nums, S) + helperCount(idx+1, sum-nums[idx], nums, S);
    }
    
    int findTargetSumWays(vector<int>& nums, int S) {
     
        return helperCount(0, 0, nums, S);    
        
    }
//     int Sum;
//     int count = 0;
//     bool recurse (int suml, vector<int>& nums, int sumr, int idx, vector<unordered_map<int, bool>> &cache) {
//         // all v me
//         if (cache[idx].find(suml) != cache[idx].end()) {
//             if (cache[idx][suml])
//                 count++;
//             return cache[idx][suml];
//         }
               
//         if (suml == sumr) {
//             count++;
//             cache[idx][suml] = true;
//             return true;
//         }

        
//         // consider next to be part of me and not me
//         for (int ii = idx; ii < nums.size(); ii++) {
//             if ((suml + nums[ii]) > Sum/2)
//                 continue;
//             if(recurse(suml+nums[ii], nums, sumr-nums[ii], ii+1, cache)) {
//                 count++;
//                 return true;
//             }
//         }
//         cache[idx][suml] = false;
//         return false;
//     }
    
//     bool canPartition(vector<int>& nums) {
//         int suml = nums[0];
//         int sum = 0;
//         for (int num : nums) {
//             sum+=num;
            
//         }
//         Sum = sum;
//         vector<unordered_map<int, bool>> cache(nums.size()+1);
//         recurse(suml, nums, sum-suml, 1, cache);
//         return true;
//     }
//     int findTargetSumWays(vector<int>& nums, int S) {
//         // in other words, how many ways to subset sum +ves and (-ves + S)
//         // part set + S into half
//         nums.push_back(S);
//         canPartition(nums);
//         if (count == 1)
//             return count;
//         return count+1;
//     }
};
