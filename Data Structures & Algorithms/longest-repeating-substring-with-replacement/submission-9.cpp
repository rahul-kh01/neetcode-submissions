class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,n=s.size(),ans=0,maxfreq=0;
        vector<int> freq(26,0);
        for(int r=0;r<n;r++){
char right=s[r]-'A';
freq[right]++;
int window=r-l+1;
maxfreq=max(maxfreq,freq[right]);
while(window-k>maxfreq){
    char left=s[l]-'A';
freq[left]--;
l++;
window=r-l+1;

}
ans=max(ans,window);
        }
        return ans;
    }
};
