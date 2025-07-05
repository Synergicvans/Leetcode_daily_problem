class Solution {
public:
    int romanToInt(string s) {
        int cnt=0;
        for(int i=0;i<s.size();i++){

            if(s[i]=='I'){
                if(s[i+1]=='V'){
                    cnt+=4;
                    i++;
                }
                else if(s[i+1]=='X') cnt+=9,i++;
                else cnt+=1;
            }
                
            
            else if(s[i]=='V'){
                cnt+=5;
            }
            else if(s[i]=='X'){
                if(s[i+1]=='L') cnt+=40,i++;
                else if(s[i+1]=='C')cnt+=90,i++;
                else cnt+=10;
            }
            else if(s[i]=='L'){
                cnt+=50;
            }
            else if(s[i]=='C'){
                if(s[i+1]=='D') cnt+=400,i++;
                else if(s[i+1]=='M') cnt+=900,i++;
                else cnt+=100;
            }
            else if(s[i]=='D'){
                cnt+=500;
            }
            else if(s[i]=='M'){
                cnt+=1000;
            }
        }
        return cnt;
    }
};