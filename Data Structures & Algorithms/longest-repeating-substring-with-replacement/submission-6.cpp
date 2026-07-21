class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26,0);
        int l=0,n=s.size(),ans=0,maxfreq=0;
        for(int r=0;r<n;r++){
            char right=s[r]-'A';
            freq[right]++;
            int windows=r-l+1;
            maxfreq=max(maxfreq,freq[right]);
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
