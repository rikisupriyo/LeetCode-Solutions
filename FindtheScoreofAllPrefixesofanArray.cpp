class Solution {
public:
    int maximumNu(int a, int b) {
        return (a>b)?a:b;
    }
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long> ans;
        long long maxi = 0;
        long long si = 0;
        long long sj = 0;
        for (int i=0; i<nums.size(); i++) {
            maxi = maximumNu(maxi, nums[i]);
            si += nums[i] + maxi;
            ans.push_back(si);
        }
        return ans;
    }
};
