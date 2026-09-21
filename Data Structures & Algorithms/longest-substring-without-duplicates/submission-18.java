class Solution {
    public int lengthOfLongestSubstring(String s) {
        int l=0,n=s.length(),ans=0;
int [] last=new int[256];
        for(int r=0;r<n;r++){
           int c=last[s.charAt(r)];
           l=Math.max(l,c);
           last[s.charAt(r)]=r+1;
           ans=Math.max(ans,r-l+1);
        }
        return ans;

    }
}
