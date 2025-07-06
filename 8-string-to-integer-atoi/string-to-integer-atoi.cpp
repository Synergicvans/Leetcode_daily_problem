class Solution {
public:
    int myAtoi(string s) {
        int i=0,n=s.size(),num=0,sign=1;
        while(i<n && s[i]==' ') i++;

        if(s[i]=='-' || s[i]=='+'){
            if(s[i]=='-') sign=-1;
            i++;
        }
        while(i<n){
            int digit =s[i]-'0';
            if(digit<0 || digit >10) break;

            // Step 4: Check for overflow
            if (num > (2147483647 / 10) || (num == 2147483647 / 10 && digit > 7)) {
                if (sign == 1) return 2147483647;
                else return -2147483648;
            }
            num=num*10+digit;
            i++;
        }
        return num*sign;
    }
};