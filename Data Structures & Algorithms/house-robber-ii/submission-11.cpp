class Solution {
public:
int solve(vector<int>& nums,int l,int r){
 int a=0,b=0;

  for(int i=l;i<=r;i++){
int c=max(b,nums[i]+a);
a=b;
b=c;
  }
  return b;
}
    int rob(vector<int>& nums) {
      int n=nums.size();

     if(n==1) return nums[0];
     return max(solve(nums,0,n-2),solve(nums,1,n-1));
    }
};
