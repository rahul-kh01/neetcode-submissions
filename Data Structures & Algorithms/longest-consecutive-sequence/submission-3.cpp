class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans=0;
        unordered_set s(nums.begin(),nums.end());
        for(int x:nums){
            if(!s.contains(x-1)){
                int len=1;
                while(s.contains(x+len)) len++;

                ans=max(len,ans);
            }
        }
        return ans;
    }
};
