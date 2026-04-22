class Solution {
public:
    int numRescueBoats(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l=0,r=nums.size()-1,boats=0;
        while(l<=r){
if(nums[l]+nums[r]<=k)
l++;
r--;
boats++;
        }
        return boats;
        
    }
};