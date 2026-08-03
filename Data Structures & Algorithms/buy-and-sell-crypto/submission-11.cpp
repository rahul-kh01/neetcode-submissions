class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxprofit=0,cost=INT_MAX;
       for(int c:prices){
        cost=min(c,cost);
        maxprofit=max(maxprofit,c-cost);
       }
       return maxprofit;

    }
};
