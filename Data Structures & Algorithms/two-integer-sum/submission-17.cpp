class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> mp;
    vector<int> ans;
    int n=nums.size();
    for(int i=0;i<n;i++){
int comp=target-nums[i];
if(mp.contains(comp))
return {mp[comp], i};

    mp[nums[i]]=i;

    }
    return {-1,-1};
    }
};
