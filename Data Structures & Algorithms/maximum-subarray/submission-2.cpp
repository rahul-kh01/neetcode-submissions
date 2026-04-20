class Solution {
public:
    int maxSubArray(vector<int>& nums) {
int maxprofit=INT_MIN,currmax=0;
for(int c:nums){
    currmax=max(c,currmax+c);
    maxprofit=max(currmax,maxprofit);
}
return maxprofit;
    }
};
