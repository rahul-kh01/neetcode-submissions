class Solution {
public:
    int jump(vector<int>& nums) {
        int maxjump=0,currend=0,jump=0,n=nums.size();
        for(int i=0;i<n-1;i++){
maxjump=max(maxjump,i+nums[i]);
if(currend==i){
jump++;
currend=maxjump;
}
        }
        return jump;
    }
};
