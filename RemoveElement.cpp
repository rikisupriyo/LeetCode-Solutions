class Solution{
    public:
        int removeElement(vector<int>& nums, int val){
            vector<int> v;
            for(auto i=nums.begin(); i!=nums.end(); i++){
                if(*i != val)
                    v.push_back(*i);
            }
            nums.clear();
            for(auto i=v.begin(); i!=v.end(); i++)
                nums.push_back(*i);
            
            return nums.size();
        }
};
