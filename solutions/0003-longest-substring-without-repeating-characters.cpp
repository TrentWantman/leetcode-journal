// 3. Longest Substring Without Repeating Characters
// Medium | Sliding Window
// https://leetcode.com/problems/longest-substring-without-repeating-characters/
// Time: O(n) | Space: O(min(n, m))

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_set<char> ss;
       int longest_set = 0;
       int l = 0;
       int r = 0;

       while (r<s.length()){

        if (ss.count(s[r])){
            ss.erase(s[l]);
            l++;
        }
        else{
            ss.insert(s[r]);
            int set_size = ss.size();
            longest_set = max(set_size, longest_set);
            r++;
        }
       }
       return longest_set;
    }
};


// x y y x x y y x z
