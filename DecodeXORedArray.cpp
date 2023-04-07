#define pb push_back
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> v;
        v.pb(first);

        for (int i=0; i<encoded.size(); i++) {
            first = v[i];
            v.pb(encoded[i] ^ first);
        }
        return v;
    }
};
