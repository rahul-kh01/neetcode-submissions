class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MIN,sell=0,prev2sell=0;
        for(int c:prices){
            int prevbuy=buy,prevsell=sell;
            buy=max(buy,prev2sell-c);
            sell=max(sell,prevbuy+c);
            prev2sell=prevsell;
        }
        return sell;
    }
};
