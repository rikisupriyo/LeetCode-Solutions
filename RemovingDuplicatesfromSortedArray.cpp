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
