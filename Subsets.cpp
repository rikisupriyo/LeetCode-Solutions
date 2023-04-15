class Solution {
public:
    void backtrack(int idx, vector<int>& nums, vector<int>& subs, vector<vector<int>>& ans) {
      if (idx == nums.size()) {
        ans.push_back(subs);
        return;
      }

      //to push
      subs.push_back(nums[idx]);
      backtrack(idx+1, nums, subs, ans);
      //not to push
      subs.pop_back();
      backtrack(idx+1, nums, subs, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subs;
        vector<vector<int>> ans;
        backtrack(0, nums, subs, ans);
        return ans;
    }
};
