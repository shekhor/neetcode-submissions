class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        bool raw[9][9] = {};
        bool col[9][9] = {};
        bool box[9][9] = {};

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                int box_num = (i/3) * 3 + (j/3);
                if(board[i][j] == '.'){
                    continue;
                }

                int num = board[i][j] - '1';

                if(raw[i][num] || col[j][num] || box[box_num][num]){
                    return false;
                }

                raw[i][num] = true;
                col[j][num] = true;
                box[box_num][num] = true;
            }
        }

        return true;

    }
};