// 20. Valid Parentheses
// Easy | String
// https://leetcode.com/problems/valid-parentheses/
// Time: O(n) | Space: O(1)

class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> chars1 = {{'{', '}'}, {'[', ']'}, {'(', ')'}};
        stack<char> openOrder;
        for (char c : s){
            if (chars1.count(c)){
                openOrder.push(c);
            }
            else if (openOrder.empty() || c !=  chars1[openOrder.top()]){
                return false;
            }
            else{
                openOrder.pop();
            }
        }
        return openOrder.empty();
    }
};