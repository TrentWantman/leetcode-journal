// 42. Trapping Rain Water
// Hard | Two Pointers
// https://leetcode.com/problems/trapping-rain-water/
// Time: O(n) | Space: O(1)

class Solution {
public:
    int trap(vector<int>& height) {
        int total_water = 0;
        int max_area = 0;
        int l = 1;
        int r = height.size() - 2;
        int left_max = height[0];
        int right_max = height[height.size()-1];

//find largest area with a twist, find the largest space between the two.
        while (l <= r){
            if(left_max < right_max){
                if (left_max > height[l]){
                    total_water += left_max - height[l];
                }
                else{
                    left_max = height[l];
                }
                l++;
            }
            else{
                if (right_max > height[r]){
                    total_water += right_max - height[r];
                }
                else{
                    right_max = height[r];
                }
                r--;
            }
        }
        return total_water;
    }
};
