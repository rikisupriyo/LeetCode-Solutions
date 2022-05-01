#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int removeDuplicates(vector<int> &nums){
            int i=0;
            vector<int> st;
            st.push_back(nums[i++]);
            while(i<nums.size()){
                if(st.back() != nums[i])
                    st.push_back(nums[i++]);
                else
                    i++;
            }
            nums.clear();
            for(auto i=st.begin(); i!=st.end(); i++)
                nums.push_back(*i);
            return st.empty()?-1:st.size();
        }
};

int main(){
    vector<int> nums = {1,1,2};
    Solution s;
    cout<<s.removeDuplicates(nums)<<endl;
    for(auto i=nums.begin(); i!=nums.end(); i++)
        cout<<*i<<" ";
    return 0;
}