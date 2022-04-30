class Solution{
    public:
        bool isEven(int n){
            if(n%2 == 0)
                return true;
            return false;
        }

        vector<double> merge(vector<int> &num1, vector<int> &num2){
            int i=0, j=0;
            vector<double> num3;
            while(i<num1.size() && j<num2.size()){
                if(num1[i] < num2[j])
                    num3.push_back(num1[i++]);
                else
                    num3.push_back(num2[j++]);
            }
            while(i<num1.size())
                num3.push_back(num1[i++]);
            while(j<num2.size())
                num3.push_back(num2[j++]);

            return num3;
        }

        double findMedianSortedArrays(vector<int> &num1, vector<int> &num2){
            vector<double> num3 = merge(num1, num2);
            int n = num3.size();
            
            if(isEven(n))
                return  (num3[n/2]+num3[(n/2)-1])/2;
            return num3[n/2];
        }
};
