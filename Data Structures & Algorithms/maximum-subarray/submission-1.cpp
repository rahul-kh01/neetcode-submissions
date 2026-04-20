class Solution {
public:
    int maxSubArray(vector<int>& nums) {
int maxi=INT_MIN,sum=0;
for(int c:nums){
sum=max(c,sum+c);
    maxi=max(sum,maxi);
}
return maxi;
    }
};
