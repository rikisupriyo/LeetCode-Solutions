class Solution {
public:
    int reverse(int x) {
        long long sign = 1;
        if (x < 0)
            sign = -1;
        
        x = abs(x);
        long long rev=0;

        while (x > 0) {
            rev = rev*10 + x%10;
            x /= 10;
        }
        rev *= sign;
        return (rev < INT_MIN || rev > INT_MAX)?0:rev;
    }
};
