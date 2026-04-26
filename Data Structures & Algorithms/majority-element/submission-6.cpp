class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate=0,count=0;
        for(int x:nums){
            if(count==0) candidate=x;
            count+=(candidate==x)?1:-1;

        }
        return candidate;
    }
};