class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.size()!=t.size()) return false;
       int mp[26]={0} ;
       int n=s.size();
       for(int i=0;i<n;i++)
       mp[s[i]-'a']++,mp[t[i]-'a']--;

       for(int c:mp)
       if(c!=0) return false;
       return true;
    }
};
