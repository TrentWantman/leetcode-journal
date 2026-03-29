// 70. Climbing Stairs
// Easy | Math
// https://leetcode.com/problems/climbing-stairs/
// Time: O(n) | Space: O(1)

class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1;
        if (n == 2) return 2;

        int two = 1;
        int one = 2;
        int temp;

        for (int i = n-3; i >= 0; i--){
            temp = one + two;
            two = one;
            one = temp;
        }

        return one;
    }
};

//n = top

/*
    -n
   -n-1 // theres one way to reach n.
  -n-2 // theres two ways to reach n
 -n-3 // theres two plus three ways
-0 //
*/
