// 347. Top K Frequent Elements
// Medium | Array
// https://leetcode.com/problems/top-k-frequent-elements/
// Time: O(n) | Space: O(n)

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //map <key = number, value = frequency>

        unordered_map<int, int> freq_map;
        for(int num : nums){
            freq_map[num]+= 1;
        }
        
        //vector<frequencies> size =nums.size()+1
        vector<vector<int>> freq_array (nums.size()+ 1);
        for (auto iterator = freq_map.begin(); iterator != freq_map.end(); iterator++){
            freq_array[iterator->second].push_back(iterator->first);
        }

        vector<int> res;
        for (int i = freq_array.size()-1; i >= 0; i--){

            if (!freq_array[i].empty()){
                for (int val : freq_array[i]){
                    res.push_back(val);
                }
            }
            if(res.size() == k){
                return res;
            }
        }
        return {};
        //iteratro through map, frequencies[value] = key;

        //iterate through freqencies backwards. if != -, add to results vector. When vector.size() == k return vector.size

    }
};