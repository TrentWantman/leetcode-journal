// 125. Valid Palindrome
// Easy | Two Pointers
// https://leetcode.com/problems/valid-palindrome/
// Time: O(n) | Space: O(n)

class Solution {
public:
    bool isPalindrome(string s) {
        string clean;
        for (char& c : s){
            if(isalnum(c)){
                clean += tolower(c);
            }
        }

        int i = 0;
        int j = clean.size()-1;

        while (j>i){
            if(clean[j]!=clean[i]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
