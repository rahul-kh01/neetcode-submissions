class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currmax=0,currmin=0,mini=nums[0],maxi=nums[0],total=0;
        for(int x:nums){
            total+=x;
            currmax=max(x,currmax+x);
            maxi=max(maxi,currmax);
            currmin=min(x,currmin+x);
            mini=min(mini,currmin);

        }
        if(maxi<0) return maxi;
        return max(maxi,total-mini);
    }
};