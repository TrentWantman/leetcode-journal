// 128. Longest Consecutive Sequence
// Medium | Hash Table
// https://leetcode.com/problems/longest-consecutive-sequence/
// Time: O(n) | Space: O(n)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //1,2,3,4,5
        //9, 8, 1, 2, 3, 4, 2, 1, 5
        int longest_set = 0;
        unordered_map<int, int> mp;

        for (int num : nums){
            if(!mp[num]){
                mp[num] = mp[num-1] + mp[num+1] + 1;
                mp[num - mp[num - 1]] = mp[num];
                mp[num + mp[num + 1]] = mp[num];
                longest_set = max(longest_set,mp[num]);
            }
        }
        return longest_set;
    }
};
