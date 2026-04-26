class Solution {
public:
bool canship(vector<int>& nums, int mid, int k){
    int sum=0,part=1;
    for(int x:nums){
        if(sum+x>mid){
            part++;
        sum=x;}
        else
        sum+=x;
    }
    return part<=k;
}
    int shipWithinDays(vector<int>& nums, int k) {
        int l=*max_element(nums.begin(),nums.end()),r=accumulate(nums.begin(),nums.end(),0);
        while(l<r){

            int mid=(l+r)/2;
            if(canship(nums,mid,k))
          r=mid;
            else
          l=mid+1;
        }
        return l;
    }
};