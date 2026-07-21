class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        int n=s.size();
        int mp[26]={0};
        for(int i=0;i<n;i++)
        mp[s[i]-'a']++,mp[t[i]-'a']--;
        for(int x:mp){\
        if(x!=0)  return false;}
        return true;
    }
};
