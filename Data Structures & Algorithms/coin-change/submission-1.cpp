class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,INT_MAX);
        dp[0]=0;
        for(int c:coins){
            for(int s=c;s<=amount;s++){
            int prev=dp[s-c],curr=dp[s];
            if(prev!=INT_MAX)
            dp[s]=min(curr,prev+1);
            }
        }
        int res=dp[amount];
        return ( res==INT_MAX)?-1:res;
    }
};
