class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int minp=INT_MAX,profit=0;
        for(int x:nums){
minp=min(minp,x);
profit=max(profit,x-minp);
        }
        return profit;
    }
};
