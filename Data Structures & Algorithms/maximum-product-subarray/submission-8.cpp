class Solution {
public:
    int maxProduct(vector<int>& nums) {
      int maxi=1,mini=1,ans=INT_MIN;
      for(int c:nums){
        if(c<0) swap(maxi,mini);
        maxi=max(c,maxi*c);
        mini=min(c,mini*c);
        ans=max(ans,maxi);
      }  
      return ans;
    }
};
