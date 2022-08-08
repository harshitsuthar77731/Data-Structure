class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp,mp2;
        for(auto x: ransomNote)
            mp[x]++;
        for(auto x: magazine)
            mp2[x]++;
        for(auto x: ransomNote){
            if(mp2[x]<mp[x])
                return false;
        }
        return true;
    }
};
