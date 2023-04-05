class Solution {
public:
    int minimizeArrayValue(vector<int>& v) {
        long sum=0, ans=0;
        for (int i=0; i<v.size(); i++) {
            sum += v[i];
            ans = max((double)ans, ceil((double)sum/(i+1)));
        }
        return ans;
    }
};

// x >= prefixSum(i)/(i+1)
