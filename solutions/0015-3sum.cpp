// 15. 3Sum
// Medium | Array
// https://leetcode.com/problems/3sum/
// Time: O(n^2) | Space: O(n)

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int l;
        int r;

        sort(nums.begin, nums.end);

        for (int i = 0; i < nums.size(); i++;){
            if (i > 0 && nums[i] != nums[i-1]){
                continue;
            }

            l = i+1;
            r = nums.size()-1;

            while(l < r){
                if(nums[i] + nums[l] + nums[r] == 0){
                    res.push_back({nums[i], nums[l], nums[r]});
                    while(l+1 < nums.size() && nums[l] != nums[l+1]) l++;
                    while(r-1 >= 0 && nums[r] != nums[r-1]) r--;
                    if (l+1 < nums.size(){
                        l++;
                    }
                    if (r-1 >= 0{
                        r--;
                    }
                }
                else if(nums[i] + nums[l] + nums[r] > 0){
                    if (r-1 >= 0{
                        r--;
                    }
                }
                else{
                    if (l+1 < nums.size(){
                        l++;
                    }
                }
               
            }
        
        }
        return res;
    }
};