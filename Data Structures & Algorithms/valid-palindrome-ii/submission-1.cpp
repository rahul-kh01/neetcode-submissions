class Solution {
public:
    bool validPalindrome(string s,int skip=1) {
        int l=0,r=s.size()-1;
        while(l<r && s[l]==s[r])
        l++,r--;
          if(!skip) return false;
        if(l>=r) return true;
      
        return check(s,l+1,r) ||check(s,l,r-1);
    }
    bool check(string &s,int l,int r)
    {
        while(l<r) if(s[l++]!=s[r--]) return false;
        return true;
    }
};