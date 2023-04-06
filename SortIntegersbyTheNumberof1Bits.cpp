class Solution {
public:

    int countSetbit(int n) {
        int count = 0;
        while (n) {
            n = n & (n-1);
            count++;
        }
        return count;
    }

    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int, int>> v;
        for (int i=0; i<arr.size(); i++) {
            v.push_back({countSetbit(arr[i]), arr[i]});
        }
        sort(v.begin(), v.end());
        vector<int> ans;

        for (int i=0; i<arr.size(); i++) {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};
