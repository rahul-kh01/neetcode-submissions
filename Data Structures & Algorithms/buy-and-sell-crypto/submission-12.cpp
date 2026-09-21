class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0, cost=INT_MAX;
        for(int c:prices){
            cost=min(cost,c);
            maxi=max(maxi, c-cost);
        }
        return maxi;
    }
};
