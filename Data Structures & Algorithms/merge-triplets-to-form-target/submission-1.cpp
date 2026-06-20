class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        bool x=false,y=false,z=false;
        for(auto &t:triplets){
            if(t[0]>target[0] || t[1]>target[1]|| t[2]>target[2]) continue;
x|=t[0]==target[0];
y|=t[1]==target[1];
z|=t[2]==target[2];
if(x && y && z) return true;
        }

        return false;
    }
};
