class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total=0,maxi=nums[0],mini=nums[0],currmax=0,currmin=0;
        for(int c:nums){
            total+=c;
            currmax=max(c,currmax+c);
            maxi=max(currmax,maxi);
            currmin=min(c,currmin+c);
            mini=min(currmin,mini);
        }
        if(maxi<0) return maxi;
        return max(maxi,total-mini);
    }
};