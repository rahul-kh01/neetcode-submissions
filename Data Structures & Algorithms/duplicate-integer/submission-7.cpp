class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,n=nums.size();
      for(int j=0;j<n;j++)  {
        if(nums[j]==nums[j+1]) return true;

      }
      return false;
    }
};