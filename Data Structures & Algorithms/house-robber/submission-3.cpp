class Solution {
public:
    int rob(vector<int>& nums) {
        int prev2=0,prev=0;
        for(int x:nums){
            int curr=max(prev,prev2+x);
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
};
