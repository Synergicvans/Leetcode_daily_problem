class Solution {
public:
    int beautySum(string s) {
        int ans=0;

        for(int i=0;i<s.size();i++){
            int count [26]={0};
            for(int j=i;j<s.size();j++){
                int mx=INT_MIN,mn=INT_MAX;
                count[s[j]-'a']++;
                for(auto x:count){
                    if(x!=0){
                        mx=max(mx,x);
                        mn=min(mn,x);
                    }
                }
                ans+=mx-mn;
            }

        }
        return ans;
    }
};