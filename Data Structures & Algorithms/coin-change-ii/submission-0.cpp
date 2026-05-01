class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<long long int > dp(amount+1,0);
        dp[0]=1;
        for(int c:coins){
            for(int s=c;s<=amount;s++)
            dp[s]+=dp[s-c];
        }

        return (int)dp[amount];
    }
};
