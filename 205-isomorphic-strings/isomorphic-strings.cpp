class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int map1[256]={0};
        int map2[256]={0};

        if(s.size()!=t.size()) return false;

        for(int i=0;i<s.size();i++){
            if(map1[s[i]]!=map2[t[i]]) return false;
            map1[s[i]]=map2[t[i]]=i+1;
        }
        return true;
    }
};