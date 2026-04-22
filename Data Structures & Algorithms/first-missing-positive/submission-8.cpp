class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int c:nums){
            while(c>0 && c<=n && nums[c-1]!=c)
            swap(nums[c-1],c);
        }
        for(int i=0;i<n;i++)
        if(nums[i]!=i+1) return i+1;

        return n+1;
    }
};