class Solution {
public:
    int countDigits(int num) {
        int cnt=0,n=num,digit=0,length=int(log(num))+1;

        for(int i=0 ;i< length;i++){
            digit=n%10;
            if(digit!=0  && num%digit==0) cnt++;
;
            n=n/10;
        }
        return cnt;
    }
};