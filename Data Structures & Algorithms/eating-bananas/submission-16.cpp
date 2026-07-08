class Solution {
public:
    int minEatingSpeed(vector<int>& nums, int k) {
    int l=1,r=*max_element(nums.begin(),nums.end());
    while(l<r){
    int mid=(l+r)>>1,hrs=0;
    for(int p:nums) hrs+=(p+mid-1)/mid;
    if(hrs<=k)  r=mid;
    else
    l=mid+1;
    }  
    return l; 
    }
};
