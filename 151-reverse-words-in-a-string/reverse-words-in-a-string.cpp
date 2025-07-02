class Solution {
public:
    string reverseWords(string s) {
        string temp="";
        vector<string>str;
        for(char c:s){
            
            if(c!=' ') temp+=c;
            else{
                if(!temp.empty()) str.push_back(temp);
                temp="";
            };
        }
        //
        for(auto c:str){
            cout<<c<<" ";
        }
        //
        if(!temp.empty()){
            str.push_back(temp);
            temp="";
        }

        for(int i=0;i<str.size()/2;i++){
            swap(str[i],str[str.size()-i-1]);
        }

        for(int i=0;i<str.size();i++){
            temp+=str[i];
            if(i!=str.size()-1) temp+=' ';
        }
        return temp;
    }
};