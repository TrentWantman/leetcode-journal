// 435. Non-overlapping Intervals
// Medium | Array
// https://leetcode.com/problems/non-overlapping-intervals/?envType=problem-list-v2&envId=voxa048v
// Time: O(n) | Space: O(n)

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int count = 0;
        int prevEnd = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++){
            if (prevEnd > intervals[i][0]){
                count++;
                prevEnd = min(prevEnd, intervals[i][1]);
            }
            else{
                prevEnd = intervals[i][1];
            }
        }
        return count;
    }
};