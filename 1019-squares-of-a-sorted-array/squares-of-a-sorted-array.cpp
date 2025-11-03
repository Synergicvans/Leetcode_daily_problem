class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        vector<int>ans(n,0);
        int ansIndex=n-1;

        while(start<=end){
            int startSq=nums[start]*nums[start];
            int endSq=nums[end]*nums[end];

            if(startSq>endSq){
                ans[ansIndex]=startSq;
                start++;
            }
            else{
                ans[ansIndex]=endSq;
                end--;
            }
            ansIndex--;
        }
        return ans;
    }
};