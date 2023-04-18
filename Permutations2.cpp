class Solution {
public:
    void backtrack (int idx, vector<int>& nums, set<vector<int>>& res) {
        if (idx == nums.size()) {
            res.insert(nums);
            return;
        }
        for (int i=idx; i<nums.size(); i++) {
            swap(nums[i], nums[idx]);
            backtrack(idx+1, nums, res);
            swap(nums[i], nums[idx]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> s;
        vector<vector<int>> v;
        backtrack(0, nums, s);

        for(auto x:s) 
            v.push_back(x);
        return v;
    }
};
