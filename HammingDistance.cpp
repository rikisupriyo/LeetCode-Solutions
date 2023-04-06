class Solution {
public:
    int countSetBits(int n) {
        int count = 0;
        while (n) {
            n = n & (n-1);
            count++;
        }
        return count;
    }
    int hammingDistance(int x, int y) {
        int z = x ^ y;
        return countSetBits(z);
    }
};
