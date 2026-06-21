class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    unordered_set<int> s(nums.begin(),nums.end());
    int ans=0;
    for(int x:nums){
         int len=0;
    if (!s.contains(x-1)){
           
while(s.contains(x+len)) len++;

        }
        ans=max(ans,len);
    }
    return ans;
    }
};
