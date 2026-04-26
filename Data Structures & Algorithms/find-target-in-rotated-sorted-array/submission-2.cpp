class Solution {
public:
    int search(vector<int>& nums, int k) {
     int l=0,r=nums.size()-1,base=nums[0];
     while(l<=r){
        int m=l+(r-l)/2;
        int mid=nums[m];
        if(nums[m]==k) return m;
        bool goright=(mid>=base)==(k>=base)?(mid<k):(mid>=base);
        if(goright) l=m+1;
        else
        r=m-1;

     }  
     return -1; 
    }
};
