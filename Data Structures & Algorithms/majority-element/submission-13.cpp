class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,majority=0;
        for(int x:nums){
          if(count==0) majority=x;
          count+=(majority==x)?1:-1;
        }
        return majority;
    }
};