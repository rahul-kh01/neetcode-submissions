class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int buy=INT_MIN,sell=0;
      for(int curr:prices){
        int prevbuy=buy,prevsell=sell;
        buy=max(buy,prevsell-curr);
        sell=max(sell,prevbuy+curr);
      }  
      return sell;
    }
};