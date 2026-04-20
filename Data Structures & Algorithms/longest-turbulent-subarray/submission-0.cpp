class Solution {
public:
    int maxTurbulenceSize(vector<int>& nums) {
        int ans=1,up=1,down=1,prev=nums[0];
        for(int c:nums){
            if(c==prev)
            up=down=1;
            else if(c<prev){
                up=down+1;
                down=1;
            }
            else{
                down=up+1;
                up=1;
            }
            ans=max(ans,max(up,down));
            prev=c;
        }
        return ans;
    }
};