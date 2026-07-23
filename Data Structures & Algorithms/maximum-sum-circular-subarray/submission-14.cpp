class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
       int  maxi=INT_MIN,mini=INT_MAX,currmin=0,currmax=0,total=0;
       for(int x:nums){
        total+=x;
currmin=min(x,currmin+x);
mini=min(currmin,mini);
currmax=max(x,currmax+x);
maxi=max(currmax,maxi);


       }
       if(maxi<0) return maxi;
       return max(maxi,total-mini);
    }
};