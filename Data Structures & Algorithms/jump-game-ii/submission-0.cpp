class Solution {
public:
    int jump(vector<int>& nums) {
        int maxreach=0,currend=0,jump=0;
        for(int i=0;i<nums.size()-1;i++){
            maxreach=max(maxreach,i+nums[i]);
            if(i==currend){
             jump++;
             currend=maxreach;
            }
            
        }
        return jump;
    }
};
