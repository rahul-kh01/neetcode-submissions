class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int c:nums){
            while(c>0 && c<=n && nums[c-1]!=c){
                swap(c,nums[c-1]);
            }
        }
        for(int i=0;i<n;i++)
            if(i+1!=nums[i]) return i+1;

            return n+1;
        
    }
};