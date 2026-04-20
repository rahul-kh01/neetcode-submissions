class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mnp=INT_MAX,maxprofit=0;

   for(int c:prices){
mnp=min(c,mnp);
maxprofit=max(maxprofit,c-mnp);
   }
   return maxprofit;

    }
};
