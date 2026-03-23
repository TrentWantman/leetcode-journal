// 11. Container With Most Water
// Medium | Two Pointers
// https://leetcode.com/problems/container-with-most-water/
// Time: O(n) | Space: O(1)

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_area = 0;
        int i = 0;
        int j = heights.size()-1;

        while(j>i){
            max_area = max(max_area, (j-i) * min(heights[j], heights[i]));
            heights[j] < heights[i] ? j-- : i++;
        }
        return max_area;
    }
};
