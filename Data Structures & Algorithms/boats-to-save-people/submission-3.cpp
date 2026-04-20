class Solution {
public:
    int numRescueBoats(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int boats=0,n=nums.size(),l=0;
        int r=n-1;
        
        while(l<=r){
if(nums[l]+nums[r]<=k)
l++;
r--;
boats++;
        }
        return boats;

    }
};