class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int diff[1001]={};
        for(auto &t :trips){
            diff[t[1]]+=t[0];
            diff[t[2]]-=t[0];
        }
        int curr=0;
        for(int i=0;i<1001;i++){
            curr+=diff[i];
            if(curr>capacity) return false;
        }
        return true;
    }
};