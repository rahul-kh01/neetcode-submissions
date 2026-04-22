class Solution {
public:
    int maxProfit(vector<int>& nums) {
      int mnp=INT_MAX,maxprofit=0;
      for(int c:nums){
        mnp=min(mnp,c);
        maxprofit=max(maxprofit,c-mnp);
      }
        return maxprofit;
    }
};
