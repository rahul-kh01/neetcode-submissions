class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int curmax=0,curmin=0,total=0,maxsum=nums[0],minsum=nums[0];
        for(int x:nums){
            total+=x;
            curmax=max(x,curmax+x);
            maxsum=max(maxsum,curmax);
            curmin=min(x,curmin+x);
            minsum=min(minsum,curmin);
        }
        return (maxsum<0)?maxsum:max(maxsum,total-minsum);
    }
};