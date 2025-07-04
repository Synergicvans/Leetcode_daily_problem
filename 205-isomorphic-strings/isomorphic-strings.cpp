class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int>map1;
        unordered_map<char,int>map2;

        if(s.size()!=t.size()) return false;

        for(int i=0;i<s.size();i++){
            if(map1[s[i]]!=map2[t[i]]) return false;
            map1[s[i]]=map2[t[i]]=i+1;
        }
        return true;
    }
};