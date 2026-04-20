class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int ans=0,n=nums.size();
        for(int x:nums) ans|=x;
        return ans<<(n-1);
    }
};