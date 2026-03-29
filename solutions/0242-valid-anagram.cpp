// 242. Valid Anagram
// Easy | Hash Table
// leetcode.com/problems/valid-anagram
// Time: O(n) | Space: O(n)

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return 0;
        vector<int> alphabet(26, 0);

        for(int i = 0; i < s.size(); i++){
            alphabet[s[i] - 'a'] += 1;
            alphabet[t[i] - 'a'] -= 1;
        }

        for (int a : alphabet){
            if (a != 0){
                return false;
            }
        }

        return true;
    }
};