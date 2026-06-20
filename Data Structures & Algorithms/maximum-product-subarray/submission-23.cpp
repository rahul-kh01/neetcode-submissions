class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=1,mini=1,ans=INT_MIN;
        for(int x:nums){
            if(x<0) swap(maxi,mini);
            maxi=max(x,maxi*x);
            mini=min(x,mini*x);
            ans=max(maxi,ans);
        }
        return ans;
    }
};
