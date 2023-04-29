class Solution {
public:
    void fill(vector<vector<int>>& image, int i, int j, int c, int val) {
        if(i >= 0 && j >= 0 && i < image.size() && j < image[0].size() && image[i][j] == val) {
            image[i][j] = c;
            fill(image, i+1, j, c, val); fill(image, i-1, j, c, val);
            fill(image, i, j+1, c, val); fill(image, i, j-1, c, val);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc] == color) return image;
        fill(image, sr, sc, color, image[sr][sc]);
        return image;
    }
};
