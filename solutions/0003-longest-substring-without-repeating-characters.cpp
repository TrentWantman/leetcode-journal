// 3. Longest Substring Without Repeating Characters
// Medium | Hash Table
// https://leetcode.com/problems/longest-substring-without-repeating-characters/
// Time: O(n^2) | Space: O(1)

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s == "") return 0;
        unordered_set<int> seen;
        int l = 0;
        int longest = 0;

        for (int r = 0; r < s.size(); r++){
            while(seen.count(s[r])){
                seen.erase(s[l]);
                l++;
            }
            longest = max(r-l + 1, longest);
            seen.insert(s[r]);
        }
        return longest;
    }
};