class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> box(9);
        bool result = true;

        for(int i = 0; i < board.size(); i++){
            int boxR = i/3;
            for(int j = 0; j < board[i].size(); j++){
                int boxC = j/3;
                int boxnum = 3*boxR + boxC;

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
        
        return result;
    }
};
