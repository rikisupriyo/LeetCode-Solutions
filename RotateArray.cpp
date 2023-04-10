// Using List
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        list<int> l;
        for (int i=0; i<n; i++)
            l.push_back(nums[i]);

        while(k--) {
            l.push_front(l.back());
            l.pop_back();
        }
        int i=0;
        for (auto x:l) 
            nums[i++] = x;
    }
};

// Another way
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
};
