class Solution {
public:
    string frequencySort(string s) {
        int hash[256]={0};
        for(char c:s) hash[c]++;
        vector<char>vec;
        for(int i=0;i<256;i++){
            if(hash[i]!=0) vec.push_back(i);
        }
        for(auto c:vec) cout<<c<<" ";
        cout<<endl;

        for(int i=1;i<vec.size();i++){
            int j=i;
            while(j>0 && hash[vec[j]]>hash[vec[j-1]]){
                int temp=vec[j-1];
                vec[j-1]=vec[j];
                vec[j]=temp;
                j--;
            }
        }
        for(auto c:vec) cout<<c<<" ";

        string result="";
        for(int i=0;i<vec.size();i++){
            result+=string(hash[vec[i]],vec[i]);
        }
        return result;
    }
};