class Solution {
public:
    bool isAnagram(string s, string t) {
      if(s.size()!=t.size()) return false;
    //   sort(s.begin(),s.end());
    //     sort(t.begin(),t.end());
    //     return s==t;
    int n=s.size();
int mp[26]={};
for(int i=0;i<n;i++)
    mp[s[i]-'a']++,mp[t[i]-'a']--;
    for(auto x:mp)
    if(x) return false;

    return true;

    }
};
