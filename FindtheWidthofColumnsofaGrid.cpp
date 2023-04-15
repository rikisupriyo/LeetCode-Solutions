class Solution {
public:
    int size(int n) {
        if (n==0) return 1;
        int c;
        (n<0)?c=1:c=0;
        while (n != 0) {
            c++;
            n/=10;
        }
        return c;
    }
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int maxi;
        vector<int> v;
        for (int i=0; i<grid[0].size(); i++) {
            maxi = 0;
            for (int j=0; j<grid.size(); j++) {
                maxi = max(maxi, size(grid[j][i])); 
            }
            v.push_back(maxi);
        }
        return v;
    }
};
