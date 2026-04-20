class Solution {
public:
    bool isAnagram(string s, string t) {
    int cnt[26]={0};
    if(s.size()!=t.size()) return false;
    int n=t.size();
    for(int i=0;i<n;i++)
    cnt[s[i]-'a']++, cnt[t[i]-'a']--;

    for(int x:cnt)
    if(x) return false;

    return true;
    }
};
