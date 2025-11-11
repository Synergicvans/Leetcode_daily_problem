class Solution {
public:
    double myPow(double x, int y) {
        long n=y;
        double returns =1;
        if(x==1) return 1;
        else if(x==-1){
            if(n%2==0) return 1;
        }
        if(n>0){
            while(n>0){
            if(n&1) returns*=x;
            x=x*x;
            n=n>>1;
        }
        }
        else{
            n=-n;
            while(n>0){
                if(n&1) returns/=x;
                x=x*x;
                n=n>>1;
            }
        }
        
        return returns;
    }
};