class Solution {
public:
    int maxTurbulenceSize(vector<int>& nums) {
        int up=1,down=1,ans=0,prev=nums[0];
        for(int x:nums){
            if(x==prev)
            up=down=1;
            else if(x<prev){
                down=up+1;
                up=1;
            }
            else
            {
                up=down+1;
                down=1;
            }
            ans=max(ans,max(up,down));;
            prev=x;
        }
        return ans;
    }
};