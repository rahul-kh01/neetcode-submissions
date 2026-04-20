class Solution {
public:
    vector<int> replaceElements(vector<int>& nums) {
       int n=nums.size(),maxi=-1 ;
       for(int i=n-1;i>=0;i--){
        int c=nums[i];
        nums[i]=maxi;
        maxi=max(maxi,c);
       }
       return nums;
    }
};