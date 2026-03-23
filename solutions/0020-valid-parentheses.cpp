// 20. Valid Parentheses
// Easy | Stack
// https://leetcode.com/problems/valid-parentheses/
// Time: O(n) | Space: O(n)

class Solution {
public:
    bool isValid(string s) {
        stack<char> character_stack;
        unordered_map<char, char> openers;
        openers['{'] = '}';
        openers['('] = ')';
        openers['['] = ']';

        for (char character : s){
            
            if (openers.count(character)){
                character_stack.push(character);
            }
            else if (character_stack.empty() || openers[character_stack.top()] != character) {
                return false;
            }
            else{
                character_stack.pop();
            }
        }
        return character_stack.empty();
    }
};
