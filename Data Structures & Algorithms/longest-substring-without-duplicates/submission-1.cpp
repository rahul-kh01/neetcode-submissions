class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,ans=0;
        vector<int> last(256,-1);
        for(int r=0;r<s.size();r++){
            char curr=s[r];
          l=max(l,last[curr]+1);
          last[curr]=r;
          ans=max(ans,r-l+1);


        }
        return ans;
    }
};
