class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total=0,maxi=nums[0],mini=nums[0],currmin=0,currsum=0;
        for(int c:nums){
            total+=c;
            currsum=max(c,currsum+c);
            maxi=max(currsum,maxi);
            currmin=min(c,currmin+c);
            mini=min(currmin,mini);

        }
        if(maxi<0) return maxi;
        return max(total-mini,maxi);
    }
};