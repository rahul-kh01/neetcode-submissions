class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     
int maxi=INT_MIN,curr=0;
for(int c:nums){
    curr=max(c,curr+c);
    maxi=max(maxi,curr);
}
return maxi;
    }
};
