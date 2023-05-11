class Solution {
public:
    double findMaxAverage(vector<int>& v, int k) {
        int i=0, sum=0, res=INT_MIN;

        for(int j=0; j<v.size(); j++) {
            sum += v[j];

            if(j-i+1 == k) {
                res = max(res, sum);
                sum -= v[i++];
            }
        }
        return ((double)res/k);
    }
};
