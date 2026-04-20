class Solution {
public:
    int maxSubArray(vector<int>& nums) {
int maxi=INT_MIN,currsum=0;
for(int c:nums){
    currsum=max(c,currsum+c);
maxi=max(maxi,currsum);
}
return maxi;
    }
};
