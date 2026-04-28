class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,INT_MAX);
        dp[0]=0;
        for(int c:coins){
            for(int s=c;s<=amount;s++){
                int curr=dp[s],prev=dp[s-c];
                if(dp[s-c]!=INT_MAX)
                dp[s]=min(curr,prev+1);

            }
        }
        return (dp[amount]==INT_MAX)?-1:dp[amount];
    }
};
