class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        vector<int> v;
        int x = 0;
        int n = encoded.size();
        for (int i=1; i<=n+1; i++) x^=i;
        for (int i=1; i<n; i+=2) x^=encoded[i];

        v.push_back(x);
        for (int i=1; i<=n; i++) 
            v.push_back(v[i-1] ^ encoded[i-1]);
        return v;
    }
};
