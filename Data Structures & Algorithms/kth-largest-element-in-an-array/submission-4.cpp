class Solution {
public:
int part(vector<int>& nums, int l,int r){
    int i=l,pivot=nums[r];
    for(int j=l;j<r;j++)
   if(pivot<nums[j]) swap(nums[i++],nums[j]);
   swap(nums[i],nums[r]);
   return i;

}
    int findKthLargest(vector<int>& nums, int k) {
        int l=0,r=nums.size()-1;
        k--;
        while(true){
            int p=part(nums,l,r);
            if(p==k) return nums[p];
           else  if(p<=k) l=p+1;
else 
r=p-1;
        }
    }
};
