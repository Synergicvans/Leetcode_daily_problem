class Solution {
public:
    string reverseWords(string s) {
        vector<string>ans;
        string temp="";
        
        for(char c:s){
            if(c!=' '){
                temp+=c;
            }
            else if(!temp.empty()){
                ans.push_back(temp);
                temp="";
            }

        }
        if(!temp.empty()) ans.push_back(temp);
        temp="";
        //
        for(auto i:ans){
            cout<<i;
        }
        cout<<endl;
        //
        for(int i=0;i<ans.size()/2;i++){
            swap(ans[i],ans[ans.size()-i-1]);
        }
        //
        for(auto i:ans){
            cout<<i;
        }
        //
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                temp+=ans[i][j];
            }
            if(i!=ans.size()-1) temp+=" ";
        }
        return temp;
    }
};