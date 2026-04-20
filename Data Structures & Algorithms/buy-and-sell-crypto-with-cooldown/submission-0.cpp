class Solution {
public:
   int maxProfit(vector<int>& prices) {
    int buy = INT_MIN;
    int sell = 0;
    int prev2sell = 0; // sell[i-2]

    for(int p : prices){
        int prevbuy = buy;
        int prevsell = sell;

        buy = max(buy, prev2sell - p); // cooldown respected
        sell = max(sell, prevbuy + p);

        prev2sell = prevsell;
    }
    return sell;
}

};
