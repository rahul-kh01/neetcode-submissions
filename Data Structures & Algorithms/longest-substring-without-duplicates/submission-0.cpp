class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,ans=0;
        vector<int> last(256,-1);
        for(int r=0;r<s.size();r++){
            l=max(l,last[s[r]]+1);
            last[s[r]]=r;
            ans=max(ans,r-l+1);

        }
        return ans;
    }
};
