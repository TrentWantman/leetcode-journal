// 49. Group Anagrams
// Medium | Array
// https://leetcode.com/problems/group-anagrams/?envType=problem-list-v2&envId=voxa048v
// Time: O(n^2) | Space: O(n)

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> freq_maps;
        vector<vector<string>> res;

        for (string s : strs){
            string freq (26, 0);
            for(char c : s){
                freq[c-'a'] ++;
            } 
            freq_maps[freq].push_back(s);
        }

        for (auto it = freq_maps.begin(); it != freq_maps.end(); it++){
            res.push_back(it->second);
        }

        return res;
    }
};
