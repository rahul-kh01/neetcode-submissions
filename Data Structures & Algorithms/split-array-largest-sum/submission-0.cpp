class Solution {
public:
bool canSplit(vector<int>& nums, int mid,int k){
long long sum=0,parts=1;
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
        long long l=*max_element(nums.begin(),nums.end());
        long long r=accumulate(nums.begin(),nums.end(),00LL);
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