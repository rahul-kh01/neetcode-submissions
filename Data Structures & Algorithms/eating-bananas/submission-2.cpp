class Solution {
public:
    int minEatingSpeed(vector<int>& nums, int k) {
        int l=1,r=*max_element(nums.begin(),nums.end());
        while(l<r){
            int m=l+(r-l)/2,hrs=0;
            for(int p:nums) hrs+=(p+m-1)/m;
            if(hrs<=k) r=m;
            else l=m+1;
        }
        return l;
    }
};
