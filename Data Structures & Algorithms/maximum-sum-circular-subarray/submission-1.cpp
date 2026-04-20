class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int curmax=0,curmin=0,total=0,maxsum=nums[0],minsum=nums[0];
        for(int c:nums){
            total+=c;
            curmax=max(c,curmax+c);
maxsum=max(maxsum,curmax);
curmin=min(c,curmin+c);
minsum=min(minsum,curmin);


        }
        return (maxsum<0)?maxsum:max(maxsum,total-minsum);
    }
};