#include <bits/stdc++.h>
using namespace std;

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

int main(){
    Solution s;
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    cout<<s.removeElement(nums, 2)<<endl;
    for(auto i=nums.begin(); i!=nums.end(); i++)
        cout<<*i<<" ";
    return 0;
}