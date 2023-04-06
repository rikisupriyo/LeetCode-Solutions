class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> v;
        sort(potions.begin(), potions.end());

        for (auto spell : spells) {
            long long minReq = (success + spell - 1)/spell;
            auto it = lower_bound(potions.begin(), potions.end(), minReq);
            v.push_back(potions.end() - it);
        }
        return v;
    }
};
