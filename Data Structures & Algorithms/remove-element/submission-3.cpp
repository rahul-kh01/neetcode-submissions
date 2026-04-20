class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for(int c:nums)
        if(c!=val) nums[k++]=c;

        return k;
    }
};