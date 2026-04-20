class Solution {
public:
    int maxSubArray(vector<int>& nums) {
int curr=0,maxi=INT_MIN;
for(int c:nums){
    curr=max(c,curr+c);
    maxi=max(maxi,curr);
}
return maxi;
    }
};
