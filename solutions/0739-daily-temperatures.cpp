// 739. Daily Temperatures
// Medium | Array
// https://leetcode.com/problems/daily-temperatures/
// Time: O(n) | Space: O(n)

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> result(temp.size(), 0);
        stack<int> stk;

        for(int i = 0; i < temp.size(); i++){
            while (!stk.empty() && temp[stk.top()] < temp[i]){
                    result[stk.top()] = i - stk.top();
                    stk.pop();
            }
            stk.push(i);
        }
        return result;
    }
};