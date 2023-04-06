class Solution {
public:
    int BK(int n) {
        int c=0;
        while(n) {
            n &= n-1;
            c++;
        }
        return c;
    }

    vector<int> countBits(int n) {
        vector<int> v;

        for (int i=0; i<=n; i++) 
            v.push_back(BK(i));
        return v;
    }
};
