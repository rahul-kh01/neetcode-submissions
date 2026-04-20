class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]=1;
        int ans=0,sums=0,n=nums.size();
        for(int c:nums){
            sums+=c;
            ans+=mp[sums-k];
            mp[sums]++;
        }
        return ans;
    }
};