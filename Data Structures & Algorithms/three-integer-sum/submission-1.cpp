class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        vector<vector<int>> ans;
        int n=nums.size(),k=0;
        for(int i=0;i<n;i++){
if( i && nums[i]==nums[i-1]) continue;
for(int l=i+1,r=n-1;l<r;){
    int sum=nums[i]+nums[l]+nums[r];
    if(sum==k) {
        ans.push_back({nums[i],nums[l],nums[r]});
        l++,r--;
        while(l<r && nums[l]==nums[l-1]) l++;
        while(l<r && nums[r]==nums[r+1]) r--;

    }
    else if(sum<k) l++;
    else r--; 

}
        }

        return ans;

    }
};
