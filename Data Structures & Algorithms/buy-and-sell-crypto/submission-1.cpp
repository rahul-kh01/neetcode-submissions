class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int profit=INT_MAX,maxprofit=0;
        for(int c:nums){
            profit=min(c,profit);
            maxprofit=max(maxprofit,c-profit);
        }
        return maxprofit;
    }
};
