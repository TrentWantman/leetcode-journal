// 347. Top K Frequent Elements
// Medium | Array
// https://leetcode.com/problems/top-k-frequent-elements/
// Time: O(n) | Space: O(n)

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> all;
        vector<vector<int>> buckets (nums.size()+1);

        for (int& x : nums){
            all[x]++;
        }

        for (auto& [num, freq]: all){
            buckets[freq].push_back(num);
        }

        vector<int> res;
        for (int i = buckets.size() -1; i >= 0; --i){
            for (int n : buckets[i]){
                res.push_back(n);
                if (res.size() == k){
                    return res;
                }
            }
        }

        return {};
    }
};
