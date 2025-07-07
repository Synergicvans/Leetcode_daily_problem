class Solution {
public:
    int myAtoi(string s) {
        int i=0,n=s.size(),sign=1;
        long ans=0;
        while(s[i]==' ' && i<n){
            i++;
        }
        if(i<n && s[i]=='-' || s[i]=='+'){
            if(s[i]=='-') sign=-1;
            i++;
        }
        while(s[i]>='0' && s[i]<='9' && i<n){
            int digit=s[i]-'0';
            ans=ans*10+digit;
            if(sign*ans>INT_MAX) return INT_MAX;
            if(sign*ans<INT_MIN) return INT_MIN;
            i++;
        }
        return ans*sign;
    }
};