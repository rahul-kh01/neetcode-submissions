class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MIN,sell=0;
        for(int x:prices){
            int prevsell=sell,prevbuy=buy;
        buy=max(buy,prevsell-x);
        sell=max(sell,prevbuy+x);
        }
        return sell;
    }
};