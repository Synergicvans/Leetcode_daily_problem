class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long maxm=LLONG_MIN;
        long long answer=0;
        for(int i=0;i<nums.size()-2;i++){
            for(int j=i+1;j<nums.size()-1;j++){
                for(int k=nums.size()-1;k>j;k--){
                    answer=static_cast<long long>(nums[i]-nums[j])*nums[k]; //here we can simply use (long long) also
                    maxm=max(maxm,answer);
                    answer=0;
                }
            }
        }
        if(maxm<0){
            return 0;
        }
        return maxm;
    }
};