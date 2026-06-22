class Solution {
public:
int canship(vector<int>& nums,int mid, int k){
    int part=1,sum=0;
    for(int x:nums){
        if(sum+x>mid){
            sum=x;
          part++;
        }
        else
        sum+=x;
    }
    return part<=k;
}
    int shipWithinDays(vector<int>& nums, int k) {
        int l=*max_element(nums.begin(),nums.end()),r=accumulate(nums.begin(),nums.end(),0);
        while(l<r){
            int mid=(l+r)>>1;

            if(canship(nums,mid,k)) r=mid;
            else
            l=mid+1;
        }
        return l;
        
    }
};