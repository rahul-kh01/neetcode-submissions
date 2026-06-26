class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1=0,c2=1,n=nums.size(),n1=0,n2=0;
        for(int x:nums){
            if(x==c1) n1++;
            else if(x==c2) n2++;
            else if(!n1) c1=x,n1=1;
            else if(!n2) c2=x,n2=1;
            else
            n1--,n2--;
                    }
                    n1=0,n2=0;
                    for(int x:nums){
                        if(x==c1) n1++;
                        if(x==c2) n2++;
                    }
                    vector<int> ans;
                    if(n1>n/3) ans.push_back(c1);
                    if(n2>n/3) ans.push_back(c2);
                    return ans;
    }
};