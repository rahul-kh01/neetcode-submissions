class Solution {
public:
    int numRescueBoats(vector<int>& nums, int k) {
        int l=0,r=nums.size()-1, boats=0;;
        sort(nums.begin(),nums.end());
        while(l<=r){
            if(nums[l]+nums[r]<=k)
            l++;
            r--;
            boats++;
        }
        return boats;
    }
};