class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        int l=0,n=nums.size(),sum=0,ans=INT_MAX;
        for(int r=0;r<nums.size();r++){
            sum+=nums[r];
            while(sum>=k){
                ans=min(ans,r-l+1);
                sum-=nums[l++];
            }
        }
        return ans==INT_MAX?0:ans;
    }
};