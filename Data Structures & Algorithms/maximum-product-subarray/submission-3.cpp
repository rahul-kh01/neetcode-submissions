class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int minp=1,maxp=1,ans=INT_MIN;
        for(int c:nums){
            if(c<0) swap(minp,maxp);
            minp=min(c,c*minp);
            maxp=max(c,c*maxp);
            ans=max(ans,maxp);
        }
        return ans;

    }
};
