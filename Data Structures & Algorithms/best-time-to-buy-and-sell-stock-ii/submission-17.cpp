class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int buy=INT_MIN,sell=0;
        for(int c:nums){
            int prevbuy=buy,prevsell=sell;
            buy=max(buy,prevsell-c);
            sell=max(sell,prevbuy+c);

        }
        return sell;
    }
};