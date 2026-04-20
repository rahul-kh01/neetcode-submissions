class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=1,mini=1,ans=INT_MIN;;
        for(int c:nums){
            if(c<0) swap(maxi,mini);
            maxi=max(c,c*maxi);
            mini=min(c,c*mini);
            ans=max(maxi,ans);
        }
        return ans;
    }
};
