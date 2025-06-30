class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(),strs.end());
        string a1=strs[0];
        string a2=strs[strs.size()-1];

        int i=0,j=0;
        while( i < a1.size() && j < a2.size() &&  a1[i]==a2[j]){
            ans+=a1[i];
            i++;j++;
        }
        
        return ans;
    }
};