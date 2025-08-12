class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>temp;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0) temp.push_back(nums[i]);
            else cnt++;
        }
        for(int i=0;i<nums.size();i++){
            if(i<nums.size()-cnt) nums[i]=temp[i];
            else nums[i]=0;
        }
    }
};