class Solution {
public:
    int maxProfit(vector<int>& nums) {
      int mnp=INT_MAX,maxi=0;
      for(int c:nums){
        mnp=min(c,mnp);
        maxi=max(maxi,c-mnp);
      }  
      return maxi;
    }
};
