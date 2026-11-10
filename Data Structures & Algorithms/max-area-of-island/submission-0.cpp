class Solution {
public:
    int findMaxIsland(int r, int c, vector<vector<int>>& grid){
        if(r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() || grid[r][c] == 0){
            return 0;
        }
        grid[r][c] = 0;

        int num = 0;

        num = max(num, 1 + findMaxIsland(r+1, c, grid));
        num = max(num, 1 + findMaxIsland(r, c+1, grid));
        num = max(num, 1 + findMaxIsland(r-1, c, grid));
        num = max(num, 1 + findMaxIsland(r, c-1, grid));

        return num;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int result = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] == 1){
                    result = max(result, findMaxIsland(i, j, grid));
                }
            }
        }
        return result;
    }
};
