class Solution {
public:
bool canship(vector<int>& nums,int mid, int k){
int part=1,sum=0;
for(int x:nums){
    if(sum+x>mid){
        part++;
        sum=x;
    }
    else
    sum+=x;
}
return part<=k;
}
    int shipWithinDays(vector<int>& nums, int k) {
        int l=*max_element(nums.begin(),nums.end()),r=accumulate(nums.begin(),nums.end(),0);
        while(l<r){
            int m=(l+r)>>1;
            if(canship(nums,m,k))
            r=m;
            else
            l=m+1;
        }
        return l;
        
    }
};