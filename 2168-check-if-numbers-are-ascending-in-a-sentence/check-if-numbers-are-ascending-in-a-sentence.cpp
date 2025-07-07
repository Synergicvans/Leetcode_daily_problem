class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int>ans;
        
        int i=0;
        while(i<s.size()){
            if(s[i]>='0' && s[i]<='9'){
                int j=i;
                int r=0;
                while(s[j]>='0' && s[j]<='9' && j<s.size()){
                    int digit=s[j]-'0';
                    r=r*10+digit;
                    j++;
                }
                ans.push_back(r);
                i=j;
            }
            else i++;
        }
        for(auto c:ans){
            cout<<c<<' ';
        }
        cout<<endl;
        for(int i=1;i<ans.size();i++){
            if(ans[i-1]>=ans[i]) return false;
        }
        return true;
    }
};