class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size(),maxfreq=0,l=0,ans=0;
        vector<int> freq(26,0);
        for(int r=0;r<n;r++){
            char right=s[r]-'A';
            freq[right]++;
            maxfreq=max(maxfreq,freq[right]);
            int windows=r-l+1;
            while(windows-k>maxfreq){
                int left=s[l]-'A';
                freq[left]--;
                l++;
                windows=r-l+1;
            }
            ans=max(ans,windows);
        }
        return ans;
    }
};
