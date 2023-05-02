class Solution {
public:
    int arraySign(vector<int>& nums) {
       int sign = 1;

       for(auto x:nums) {
           if(x == 0) { sign = 0; break; }
           if(x < 0) sign *= -1;
       } 
       return sign;
    }
};
