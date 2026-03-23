// 49. Group Anagrams
// Medium | Array
// https://leetcode.com/problems/group-anagrams/
// Time: O(n*k) | Space: O(n*k)

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>> hashmap;
        for (int i = 0; i < strs.size(); i++){
            vector<int> freqs (26,0);
            for(int j = 0; j < strs[i].size(); j++){
                freqs[strs[i][j] - 'a']++;
            }
            string key = "";
            for(int x : freqs){
                key += to_string(x) + ",";
            }
            hashmap[key].push_back(strs[i]);
        }
        vector<vector<string>> answer;
        // auto iter(hashmap.begin(), hashmap.end()){
        for (auto& [key,value] : hashmap) {
            answer.push_back(value);
        }
        return answer;
    }
};
