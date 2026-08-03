class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currmax=0,currmin=0, maxi=nums[0],mini=nums[0],total=0;
        for(int c:nums){
total+=c;
currmin=min(c,currmin+c);
mini=min(mini,currmin);
currmax=max(c,currmax+c);
maxi=max(maxi,currmax);
        }
        if(maxi<0) return maxi;
        return max(maxi,total-mini);
    }
};