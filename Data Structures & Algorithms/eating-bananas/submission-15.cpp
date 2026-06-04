class Solution {
public:
    int minEatingSpeed(vector<int>& nums, int k) {
        int l=1,r=*max_element(nums.begin(),nums.end());
        while(l<r){
            int hrs=0,m=(l+r)>>1;
            for(int p:nums) hrs+=(p+m-1)/m;
if(hrs<=k) r=m;
else
l=m+1;

        }
        return l;
    }
};
