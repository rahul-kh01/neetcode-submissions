class Solution {
public:
    int maxSubArray(vector<int>& nums) {
int currmax=0,maxi=INT_MIN;
for(int c:nums){
    currmax=max(c,currmax+c);
    maxi=max(currmax,maxi);
}
return maxi;
    }
};
