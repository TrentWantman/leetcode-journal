// 15. 3Sum
// Medium | Array
// https://leetcode.com/problems/3sum/
// Time: O(n) | Space: O(n)

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++){

            if (i > 0 && nums[i] == nums[i-1]) continue;

            int l = i + 1;
            int r = nums.size() -1;

            while(l < r){
                
                int temp = nums[i] + nums[l] + nums[r];

                if (temp == 0){
                    
                    vector<int> triplets = {nums[i], nums[l], nums[r]};
                    res.push_back(triplets);

                    while (l < r && nums[l] == nums[l+1]) l++; // skip duplicate l
                    while (l < r && nums[r] == nums[r-1]) r--; // skip duplicate r
                    l++;
                    r--;
                }
                else if(temp > 0){
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        return res;
    }
};