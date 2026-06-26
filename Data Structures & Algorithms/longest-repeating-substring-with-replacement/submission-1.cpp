class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size(),ans=0,maxFreq=0,l=0;
        vector<int> freq(26,0);
        for(int r=0;r<n;r++){
        char right=s[r]-'A';
        freq[right]++;
     
 maxFreq=max(maxFreq,freq[right]);
   int window=r-l+1;
while(window-k>maxFreq){
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
