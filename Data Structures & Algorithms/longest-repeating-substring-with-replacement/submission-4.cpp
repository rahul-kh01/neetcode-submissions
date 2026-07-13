class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,maxfreq=0,ans=0,n=s.size();
        vector<int> freq(26,0);
        for(int r=0;r<n;r++){
            char right=s[r]-'A';
            freq[right]++;
            maxfreq=max(maxfreq,freq[right]);
            int windows=r-l+1;
            if(windows-k>maxfreq){
 char left=s[l]-'A';
            freq[left]--;
            l++;
             windows=r-l+1;
            }
            ans=max(ans,windows);
        }
        return ans;
    }
};
