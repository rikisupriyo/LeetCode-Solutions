class Solution {
public:
    void fill(vector<vector<char>>& grid, int i, int j) {
        if(i >= 0 && j >= 0 && i < grid.size() && j < grid[0].size() && grid[i][j] == '1') {
            grid[i][j] = '0';
            fill(grid, i+1, j); fill(grid, i-1, j);
            fill(grid, i, j+1); fill(grid, i, j-1);
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int c=0;

        for(int i=0; i<grid.size(); i++) {
            for(int j=0; j<grid[0].size(); j++) {
                if(grid[i][j] == '1') {
                    fill(grid, i, j);
                    c++;
                }
            }
        }
        return c;
    }
};
