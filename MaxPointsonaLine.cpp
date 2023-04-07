class Solution {
public:
    int maxPoints(vector<vector<int>>& p) {
        int ans = 0;
        int n = p.size();

        for (int i=0; i<n; i++) {
            unordered_map<double, int> m;
            for (int j=0; j<n; j++) {
                if (i != j){
                    ans = max(ans, ++m[(double)(p[j][1]-p[i][1])/(p[j][0]-p[i][0])]);
                }    
            }
        }
        return ans+1;
    }
};
