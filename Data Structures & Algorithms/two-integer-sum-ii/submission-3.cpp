class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        int l=0,r=nums.size()-1;
        while(l<r){
            int sum=nums[l]+nums[r];
            if(sum==k) return{l+1,r+1};
            else if(sum<k) l++;
            else r--;
        }
        return {};
    }
};
