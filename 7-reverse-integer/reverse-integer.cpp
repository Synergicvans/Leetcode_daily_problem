class Solution {
public:
    int reverse(int x) {
        long long digit=0;
        while(x){
            digit=digit*10+x%10;
            x=x/10;
        }
        if(digit>INT_MAX || digit<INT_MIN) return 0;
        return digit;
    }
};