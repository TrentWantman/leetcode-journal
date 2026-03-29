// 11. Container With Most Water
// Medium | Array
// https://leetcode.com/problems/container-with-most-water/submissions/1961250520/
// Time: O(n) | Space: O(1)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int min_height = 0;
        int max_area = 0;

        while (l < r){
            min_height = min(height[l], height[r]);
            max_area = max(max_area, (r-l) * min_height);
            if(height[l] == height[r]){
                l++;
                r--;
            }
            else{
                min_height == height[l] ? l++ : r--;
            }
        }
        return max_area;
    }
};