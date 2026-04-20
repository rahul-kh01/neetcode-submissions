class Solution {
public:
    int rob(vector<int>& nums) {
        int prev=0,prev2=0;
        for(int x:nums){
            int curr=max(prev,prev2+x);
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
};
