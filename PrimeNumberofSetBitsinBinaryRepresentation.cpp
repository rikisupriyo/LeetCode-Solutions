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

    bool isPrime(int n) {
        if (n == 0 || n == 1) {
            return false;
        }
        for (int i = 2; i <= n/2; ++i) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    int countPrimeSetBits(int left, int right) {
        int c=0;
        for (int i=left; i<=right; i++) {
            if (isPrime(BK(i)))
                c++;
        }
        return c;
    }
};
