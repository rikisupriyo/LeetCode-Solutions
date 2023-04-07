class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int ans = 0;
        for (auto x : nums) {
            if (x&1) {
                count++;
            }
            else
                count = 0;
            ans = max(ans, count);
        }
        return ans;
    }
};
