class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MIN,sell=0;
        for(int curr:prices){
int prevbuy=buy,prevsell=sell;
buy=max(prevbuy,prevsell-curr);
sell=max(prevsell,prevbuy+curr);

        }
        return sell;
    }
};