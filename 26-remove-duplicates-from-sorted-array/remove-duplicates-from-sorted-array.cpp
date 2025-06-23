class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1;
        while(j<=nums.size()-1){
            if(nums[i]!=nums[j]){
                nums[i+1]=nums[j];
                i++;
            }
            else j++;
        }
        return i+1;
    }
};