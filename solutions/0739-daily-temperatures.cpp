// 739. Daily Temperatures
// Medium | Array
// https://leetcode.com/problems/daily-temperatures/
// Time: O(n^2) | Space: O(n)

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> unsolved;
        vector<int> res(temperatures.size(), 0);
        unsolved.push(0);
        int count = 0;
        for (int i = 1; i < temperatures.size(); i++){
            while (!unsolved.empty() && temperatures[unsolved.top()] < temperatures[i]){
                int id = unsolved.top();
                res[id] = i - id;
                unsolved.pop();
            }
            unsolved.push(i);
        }
        return res;
    }
};