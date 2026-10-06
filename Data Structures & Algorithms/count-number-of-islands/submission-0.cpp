class Solution {
public:

    void colorIsland(vector<vector<char>> &grid, int r, int c, int max_r, int max_c){
        if( r < 0 || c < 0 || r >= max_r || c >= max_c || grid[r][c] == '0'){
            return;
        } 
        grid[r][c] = '0';

        colorIsland(grid, r+1, c, max_r, max_c);
        colorIsland(grid, r-1, c, max_r, max_c);
        colorIsland(grid, r, c+1, max_r, max_c);
        colorIsland(grid, r, c-1, max_r, max_c);


    }
    int numIslands(vector<vector<char>>& grid) {
        int count_island = 0;

        for(int i=0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] == '1'){
                    count_island++;
                    colorIsland(grid, i, j, grid.size(), grid[i].size());
                }
            }
        }
        return count_island;
    }
};
