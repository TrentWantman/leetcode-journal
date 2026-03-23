// 424. Longest Repeating Character Replacement
// Medium | Sliding Window
// https://leetcode.com/problems/longest-repeating-character-replacement/
// Time: O(n) | Space: O(1)

class Solution {
public:
    int characterReplacement(string s, int k) {
        int longest = 1;
        int l = 0;
        int r = 0;
        int max_freq = 0;
        vector<int> freq (26,0) ;
        // freqs[s[r] - 'A']++;
        // r++;
        // max_freq = freqs[s[r]];

        while (r < s.length()){
            freq[s[r] - 'A']++;

            for (int i = 0; i < 26; i++){
                max_freq = max(freq[i], max_freq);
            }
            if((r - l + 1) - max_freq > k){
                freq[s[l] - 'A']--;
                l++;
            }
            r++;
            longest = r-l;
        }
            return longest;
    }
};
