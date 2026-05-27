class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int maxprofit=0,mini=INT_MAX;
        for(int x:nums){
            mini=min(x,mini);
            maxprofit=max(maxprofit,x-mini);
        }
        return maxprofit;
    }
};
