class Solution {
public:
bool canSplit(vector<int>& nums, int mid,int k){
int sum=0,parts=1;
for(int x:nums){
    if(sum+x>mid){
        parts++;
        sum=x;
    }
    else
    sum+=x;
}
return parts<=k;
}
    int splitArray(vector<int>& nums, int k) {
        int l=*max_element(nums.begin(),nums.end());
        int r=accumulate(nums.begin(),nums.end(),0);
        while(l<r){
            int mid=(l+r)/2;
            if(canSplit(nums,mid,k))
            r=mid;
            else
            l=mid+1;
        }
        return l;
    }
};