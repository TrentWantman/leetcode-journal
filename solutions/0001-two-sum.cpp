// 1. Two Sum
// Easy | Array
// https://leetcode.com/problems/two-sum/
// Time: O(n) | Space: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        for(int i = 0; i < nums.size(); i++){
            hash[nums[i]] = i;
        }
        
        for (int i = 0; i < nums.size(); i++){
            int index2 = target - nums[i];
            if (hash.count(index2) && hash[index2] != i){
                return {i, hash[index2]};
            }
        }
        return {};
    }
};
