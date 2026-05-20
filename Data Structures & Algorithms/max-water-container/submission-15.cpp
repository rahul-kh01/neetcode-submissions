class Solution {
public:
    int maxArea(vector<int>& nums) {
        int l=0,r=nums.size()-1,maxarea=0;
        while(l<r){

maxarea=max(maxarea,min(nums[l],nums[r])*(r-l));

nums[l]<nums[r]?l++:r--;

        }
        return maxarea;
    }
};
