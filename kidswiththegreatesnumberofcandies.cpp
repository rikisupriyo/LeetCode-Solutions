class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> UwU;
        int maxi = *max_element(candies.begin(), candies.end());
        for (auto x:candies) {
            if (x+extraCandies >= maxi)
                UwU.push_back(true);
            else
                UwU.push_back(false);
        }
        return UwU;
    }
};
