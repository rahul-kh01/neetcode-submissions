class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set s(nums.begin(),nums.end());
int ans=0;
        for(int x:nums){
            if(!s.contains(x-1)){
                int len=1;
                while(s.contains(x+len)) len++;
 ans=max(ans,len);
            }
           
        }
        return ans;
    }
};
