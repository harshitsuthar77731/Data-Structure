class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<int,int>mp;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end())
                mp[s[i]] = -1;
            else
                mp[s[i]]=i;
        }
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]>=0)
                return i;
        }
            
        return -1;
    }
};
