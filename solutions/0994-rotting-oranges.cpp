// 994. Rotting Oranges
// Medium | Array
// https://leetcode.com/problems/rotting-oranges/submissions/1961801783/
// Time: O(n^2) | Space: O(n)

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int good = 0;
        int bad = 0;
        int minute = 0;
        queue<pair<int,int>> badq;

        for(int m = 0; m < grid.size(); m++){
            for(int n = 0; n < grid[m].size(); n++){
                if(grid[m][n] == 2){
                    badq.push({m, n});
                    bad++;
                }
                else if(grid[m][n] == 1){
                    good++;
                }
            }
        }
        if (good == 0){
            return 0;
        }
        if(bad == 0){
            return -1;
        }
        while(!badq.empty()){
            if (good == 0){
                return minute;
            }
            int sizeq = badq.size();
            minute++;

            for(int i = 0; i < sizeq; i++){
                int m = badq.front().first;
                int n = badq.front().second;
                badq.pop();

                if(m+1 < grid.size() && grid[m+1][n] == 1){
                    grid[m+1][n] = 2;
                    good--;
                    badq.push({m+1, n});
                }

                if(m - 1 >= 0 && grid[m-1][n] == 1){
                    grid[m-1][n] = 2;
                    good--;
                    badq.push({m-1, n});
                }

                if(n+1 < grid[m].size() && grid[m][n+1] == 1){
                    grid[m][n+1] = 2;
                    good--;
                    badq.push({m, n+1});
                }

                if(n - 1 >= 0 && grid[m][n-1] == 1){
                    grid[m][n-1] = 2;
                    good--;
                    badq.push({m, n-1});
                }
            }
        }
        if(good){
            return -1;
        }
        else{
            return minute;
        }
    }
};