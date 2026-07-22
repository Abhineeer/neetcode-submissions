class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> box(9);

        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){
                int boxnum = 3*(i/3) + j/3;

                if(board[i][j] != '.'){
                
                    if(rows[i].count(board[i][j]) || cols[j].count(board[i][j]) || box[boxnum].count(board[i][j])){
                    return false;
                    }
                    rows[i].insert(board[i][j]);
                    cols[j].insert(board[i][j]);
                    box[boxnum].insert(board[i][j]);
                }   
            }   
        }
        
        return true;
    }
};
