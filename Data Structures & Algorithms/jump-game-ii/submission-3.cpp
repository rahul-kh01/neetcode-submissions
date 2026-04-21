class Solution {
public:
    int jump(vector<int>& nums) {
        int maxjump=0,currend=0,jump=0;
        for(int i=0;i<nums.size()-1;i++){
            maxjump=max(maxjump,i+nums[i]);
            if(currend==i){
                currend=maxjump;
                jump++;
            }
        }
        return jump;
    }
};
