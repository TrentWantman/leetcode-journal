// 200. Number of Islands
// Medium | Array
// https://leetcode.com/problems/number-of-islands/description/
// Time: O(n^2) | Space: O(n)

class Solution {
public:

    void dfs(vector<vector<char>>& grid, int i, int j){
        if (grid[i][j] == '1') {
            grid[i][j] = '0';
            if (j - 1 >= 0){
                dfs(grid, i, j-1);
            }
            if (j + 1 < grid[i].size()){
                dfs(grid, i, j+1);
            }
            if (i - 1 >= 0){
                dfs(grid, i-1, j);
            }
            if (i + 1 < grid.size()){
                dfs(grid, i+1, j);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == '1'){
                    count++;
                    dfs(grid, i, j);
                }
            }
        }
        return count;
    }
};