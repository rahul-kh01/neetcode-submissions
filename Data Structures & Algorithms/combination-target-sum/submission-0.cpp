class Solution {
public:
vector<vector<int>> res;
void bt(vector<int> &c,int t,int i,vector<int> &curr){
    if(t==0) {res.push_back(curr); return ;}
    for(int j=i;j<c.size()&&c[j]<=t;j++){
        curr.push_back(c[j]);
        bt(c,t-c[j],j,curr);
        curr.pop_back();
    }
}
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        sort(c.begin(),c.end());
        vector<int> curr;
        bt(c,t,0,curr);
        return res;
    }
};
