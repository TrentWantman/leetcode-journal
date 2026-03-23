// 242. Valid Anagram
// Easy | Hash Table
// https://leetcode.com/problems/valid-anagram/
// Time: O(n) | Space: O(1)

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }

        vector<int> a(26, 0);

        for (int i = 0; i < s.length(); i++){
            a[s[i]-'a']++;
            a[t[i]-'a']--;
        }
        for (int x : a){
            if (x != 0){
                return false;
            }
        }
        return true;
    }
};
