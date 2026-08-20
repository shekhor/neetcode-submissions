class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        map<pair<int, char>, int> mp;

        // Check rows
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                char temp = board[i][j];

                if (temp == '.') {
                    continue;
                }

                if (mp.count({i, temp})) {
                    return false;
                }

                mp[{i, temp}]++;
            }
        }

        mp.clear();

        // Check columns
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                char temp = board[j][i];

                if (temp == '.') {
                    continue;
                }

                if (mp.count({i, temp})) {
                    return false;
                }

                mp[{i, temp}]++;
            }
        }

        mp.clear();
        for (int i = 0; i < 9; i+=3) {
            for (int j = 0; j < 9; j+=3) {
                mp.clear();

                for(int p = i; p< i+3; p++){
                    for(int q = j; q < j+3; q++){
                        char temp = board[p][q];

                        if (temp == '.') {
                            continue;
                        }

                        if (mp.count({0, temp})) {
                            return false;
                        }
                        mp[{0, temp}]++;

                        
                    }
                }
            }
        }


        return true;
    }
};