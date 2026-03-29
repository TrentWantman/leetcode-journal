// 733. Flood Fill
// Easy | Array
// https://leetcode.com/problems/flood-fill/submissions/1960460252/
// Time: O(2^n) | Space: O(n)

class Solution {
public:

    void dfs(vector<vector<int>>& image, int sr, int sc, int color, int og){
        if (sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size()) return;
        if (image[sr][sc] != og) return;
        
        image[sr][sc] = color;

        int up = sr - 1;
        int down = sr + 1;
        int left = sc - 1;
        int right = sc + 1;

        dfs(image, up, sc, color, og);
        dfs(image, sr, left, color, og);
        dfs(image, down, sc, color, og);
        dfs(image, sr, right, color, og);
    }

        vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
            if (image[sr][sc] == color) return image;
            dfs(image, sr, sc, color, image[sr][sc]);
            return image;
        }
};