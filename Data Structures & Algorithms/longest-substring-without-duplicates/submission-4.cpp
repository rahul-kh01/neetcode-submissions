class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last(256,-1);
        int l=0,ans=0,n=s.size();
        for(int r=0;r<n;r++){
            int c=last[s[r]];
            l=max(l,c+1);
            last[s[r]]=r;
            ans=max(ans,r-l+
            1);
        }
        return ans;
    }
};
