class Solution {
public:
    //distinct
    bool distinct(vector<int> nums){
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i:mp){
            if(i.second>=2) return false;
        }
        return true;
    }


    int minimumOperations(vector<int>& nums) {
        if(nums.size()<=2){
            if(distinct(nums)) return 0;
            else return 1;
        }
        int cnt=0;
        while(nums.size()>=3){
            if(distinct(nums)) return cnt;
            else{
                nums.erase(nums.begin(),nums.begin()+3);
                cnt++;
                if(nums.size()<=2){
                    if(distinct(nums)) cnt+=0;
                    else  cnt++;
        }
            }
        }
        return cnt;
    }
};