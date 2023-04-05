class Solution {
public:
    void swap(int &a, int &b) {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    void sortColors(vector<int>& nums) {
        int flag;
        for(int i=0; i<nums.size()-1; i++){
            flag = 0;
            for(int j=0; j<nums.size() - i - 1; j++){
                if(nums[j] > nums[j+1]){
                    swap(nums[j], nums[j+1]);
                    flag = 1;
                }
            }
            if(flag == 0)
                break;
        }
    }
};
