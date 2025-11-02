class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> square(n,0);
        int start=0;
        int end=nums.size()-1;
        int square_Index=nums.size()-1;
        while(start<=end){
            int startarr=nums[start]*nums[start];
            int temp = nums[end];
            int endarr=pow(temp,2);

            if(startarr>endarr){
                square[square_Index]=startarr;
                start++;
            }
            else{
                square[square_Index]=endarr;
                end--;
            }
            square_Index--;
        }
        return square;
    }
};