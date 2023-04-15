class Solution {
public:
    int backtrack(int idx, vector<int>& nums, int xorElement) {
        if (idx == nums.size()) return xorElement;

        return backtrack(idx+1, nums, xorElement^nums[idx]) + backtrack(idx+1, nums, xorElement);
    }

    int subsetXORSum(vector<int>& nums) {
        return backtrack(0, nums, 0);
    }
};
