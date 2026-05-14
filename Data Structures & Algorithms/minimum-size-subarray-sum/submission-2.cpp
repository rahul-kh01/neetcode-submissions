class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        int l=0,sum=0,r=0,ans=INT_MAX;
        for(int c:nums){
            sum+=c,r++;
            while(sum>=k){
                ans=min(ans,r-l);
                sum-=nums[l++];
            }
        }
        return ans ==INT_MAX?0:ans;
    }
};