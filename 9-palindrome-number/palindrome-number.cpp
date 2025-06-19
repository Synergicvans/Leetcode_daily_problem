class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long n=x,digit=0;
        while(x){
            digit=digit*10+x%10;
            x=x/10;
        }
        if(digit==n) return true;
        return false;
    }
};