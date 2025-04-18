class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        string temp=countAndSay(n-1);
        string ans;
        for(int i=0;i<temp.size();i++){

            int count=1;
            while(temp[i]==temp[i+1]){
                count++;
                i++;
            }
            ans+=to_string(count);
            ans+=temp[i];

        }
        return ans;
        
    }
};