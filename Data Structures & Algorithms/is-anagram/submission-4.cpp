class Solution {
public:
    bool isAnagram(string s, string t) {
         if(s.size()!=t.size()) return false;
        // sort(s.begin(),s.end());
        //  sort(t.begin(),t.end());
        //  return s==t;
    int cnt[26]={};

        for(int i=0;i<s.size();i++)
            cnt[s[i]-'a']++,cnt[t[i]-'a']--;

            for(int x:cnt)
            if(x) return false;


            return true;

        


    }
};
