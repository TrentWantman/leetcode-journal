// 5. Longest Palindromic Substring
// Medium | Two Pointers
// https://leetcode.com/problems/longest-palindromic-substring/
// Time: O(n^2) | Space: O(1)

class Solution {
public:

    string longestPalindrome(string s) {
        if (s.length() <= 1){
            return s;
        }

        int start = 0;
        int finish = 0;
        for(int i = 0; i < s.length(); i++){
            int j = i;
            int k = i;
            while((j >= 0 && k <= s.length()-1) && s[j] == s[k]){
                j--;
                k++;
            }
            if(k - j > finish - start){
                start = j+1;
                finish = k-1;
            }

            j = i;
            k= i+1;
            while((j >= 0 && k <= s.length()-1) && s[j] == s[k]){
                j--;
                k++;
            }
            if(k - j > finish - start){
                start = j+1;
                finish = k-1;
            }
        }

        return s.substr(start, finish - start + 1);
    }
};

// for (int j = i; j < s.length(); j++){
            //     if (s.substr(i, j - i + 1).length() > longest.length() && isPalindrome(s.substr(i, j - i + 1))){
            //         longest = s.substr(i, j - i + 1);
            //     }
            // }
