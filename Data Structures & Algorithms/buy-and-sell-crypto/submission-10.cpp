class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mnp=INT_MAX,mp=0;
        for(int x:prices){
mnp=min(x,mnp);
mp=max(mp,x-mnp);
        }
        return mp;
    }
};
