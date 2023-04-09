class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> v;
        if (m*n != original.size()) return {};
        for (int i=0; i<m*n;) {
            vector<int> w;
            for (int j=0; j<n; j++) w.push_back(original[i++]);
            v.push_back(w);
        }
        return v;
    }
};
