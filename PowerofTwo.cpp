class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long i=0;
        while (1ll * 1 << i <= n) {
            if (1 << i == n)
                return true;
            i++;
        }
        return false;
    }
};
