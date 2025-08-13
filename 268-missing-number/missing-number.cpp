class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            int flag=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]==i){
                    flag=1;
                    break;
                }
            }
            if(flag==0) return i;
        }
        if(nums[nums.size()-1]!=nums.size()) return nums.size();
        return 0;
    }
};