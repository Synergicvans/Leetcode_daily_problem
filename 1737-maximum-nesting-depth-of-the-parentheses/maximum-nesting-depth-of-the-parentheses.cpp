class Solution {
public:
    int maxDepth(string s) {
        int level=0;
        int ans=0;
        for(char c:s){
            if(c=='('){
                level++;
                ans=max(ans,level);
            }
            else if(c==')')level--;
        }
        return ans;
    }
};