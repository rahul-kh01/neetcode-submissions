class Solution {
public:
    int maxSubArray(vector<int>& nums) {
int maxi=INT_MIN,curr=0;
for(int c:nums){
curr=max(curr+c,c);
maxi=max(curr,maxi);
}
return maxi;
    }
};
