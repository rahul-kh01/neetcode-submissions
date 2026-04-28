class Solution {
public:
    int jump(vector<int>& nums) {
        int jump=0,maxjump=0,currend=0;
        for(int i=0;i<nums.size()-1;i++){
            maxjump=max(maxjump,i+nums[i]);
            if(i==currend){
                jump++;
                currend=maxjump;
            }
        }
        return jump;
    }
};
