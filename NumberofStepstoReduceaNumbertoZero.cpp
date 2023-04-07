class Solution {
public:
    int numberOfSteps(int num) {
        long long c = 0;

        while (num) {
            if (num&1)
                num--;
            else
                num = num >> 1;
            c++;
        }
        return c;
    }
};
