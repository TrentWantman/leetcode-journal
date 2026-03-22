// 647. Palindromic Substrings
// Medium | Two Pointers
// https://leetcode.com/problems/palindromic-substrings
// Time: O(n^2) | Space: O(1)

class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;

        if (s == "") return count;

        for(int c = 0; c < s.size(); c++ ){
            int l = c, r = c;

            while (l >= 0 && r <s.size() && s[l] == s[r]){
                count++;
                l--;
                r++;
            }

            l = c;
            r = c + 1;
            while (l >= 0 && r <s.size() && s[l] == s[r]){
                count++;
                l--;
                r++;
            }
        }
        return count;
    }
};