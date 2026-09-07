class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int l=0,ans=0;
        vector<int> last(256,-1);
        for(int r=0;r<n;r++){
            int c=last[s[r]];
            l=max(c+1,l);
            last[s[r]]=r;
            ans=max(ans,r-l+1);


        }
        return ans;
    }
};
