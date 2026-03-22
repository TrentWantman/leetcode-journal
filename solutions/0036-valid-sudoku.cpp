// 36. Valid Sudoku
// Medium | Array
// https://leetcode.com/problems/valid-sudoku/description/
// Time: O(N^2) | Space: O(N)

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int s = board.size();
        int boxSize = sqrt(s);
        if ( s == 0 || boxSize * boxSize != s) {return false;}


        unordered_set<char> row;
        unordered_map<int, unordered_set<char>> column;
        unordered_map<int, unordered_set<char>> boxes (9);
        

        for (int i = 0; i < board.size(); i++){
            for (int j = 0; j < board[i].size(); j ++){
                char c = board[i][j];
                int box = (i / boxSize) * boxSize + (j / boxSize);

                if (c == '.') {continue;}

                if (row.count(c)){
                    return false;
                }
                if(column[j].count(c)){
                    return false;
                }
                if (boxes[box].count(c)){
                    return false;
                }
                row.insert(c);
                column[j].insert(c);
                boxes[box].insert(c);
            }
            row.clear();
        }
        return true;
    }
};
 //               int box = (i / 3) * 3 + (j / 3);
