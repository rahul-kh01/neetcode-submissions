class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
int comp=k-nums[i];
if(mp.count(comp))
return {mp[comp],i};
mp[nums[i]]=i;
        }
        return {};
    }
};
