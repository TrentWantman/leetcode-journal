// 167. Two Sum II - Input Array Is Sorted
// Medium | Array
// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// Time: O(n) | Space: O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;

        while(j>i){
            int solution = numbers[i] + numbers[j];
            if (solution > target){
                --j;
            }
            else if (solution < target){
                ++i;
            }
            else if (solution == target){
                return {i+1,j+1};
            }
        }
        return {};
    }
};
