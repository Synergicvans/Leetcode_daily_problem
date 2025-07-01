class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int k=0;
        vector<int>v;
        for (int i=0 ; i<nums.size() -1; i++){
            int a=nums[i];
            for (int j=i+1;j<nums.size();j++){
                if (a+nums[j]==target){
                    v.push_back(i);
                    v.push_back(j);
                    k=1;
                    break;
                }
            }
            if (k==1){break;}
        }
        return v;
    }
};