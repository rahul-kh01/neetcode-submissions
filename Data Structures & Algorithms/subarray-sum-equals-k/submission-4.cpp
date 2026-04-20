class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(),cnt=0,sum=0;
        unordered_map<int,int> mp;
mp[0]=1;
        for(int x:nums){
sum+=x;
cnt+=mp[sum-k];
mp[sum]++;
        }
        return cnt;
    }
};