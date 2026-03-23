// 15. 3Sum
// Medium | Two Pointers
// https://leetcode.com/problems/3sum/
// Time: O(n) | Space: O(n)

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> pairs;

        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++){
            if (i > 0 && nums[i] == nums[i-1]) continue;
            vector<int> pair;
            
            int c = -1 * nums[i];
            int a = i+1;
            int b = nums.size() -1;

            
            while (b > a){
                if (nums[a] + nums[b] == c){
    pair = {nums[i], nums[a], nums[b]};
    pairs.push_back(pair);
    ++a;
    --b;
    while (a < b && nums[a] == nums[a-1]) a++;
    while (a < b && nums[b] == nums[b+1]) b--;
}
                else if (nums[a] + nums[b] > c){
                    --b;
                }
                else if(nums[a] + nums[b] < c){
                    ++a;
                }
            }

        }
        return pairs;
    }
};
