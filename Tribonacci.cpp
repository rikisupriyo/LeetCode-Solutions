#define pb push_back
class Solution {
public:
    int tribonacci(int n) {
        vector<int> v;
        v.pb(0);
        v.pb(1);
        v.pb(1);

        for (int i=3; i<=n; i++) {
            v.pb(v[i-1]+v[i-2]+v[i-3]);
        }
        return v[n];
    }
};
