class Solution {
public:
    int rea(vector<vector<int>>& grid, int i, int j) {
        if (i >= 0 && j >= 0 && i < grid.size() && j < grid[0].size() && grid[i][j] == 1) {
            grid[i][j] = 0;
            return 1 + rea(grid, i+1, j) + rea(grid, i-1, j) + rea(grid, i, j+1) + rea(grid, i, j-1);
        }
        return 0;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxi = 0;
        for(int i=0; i<grid.size(); i++) {
            for(int j=0; j<grid[0].size(); j++) {
                if(grid[i][j] == 1) maxi = max(maxi, rea(grid, i, j));
            }
        }
        return maxi;
    }
};
