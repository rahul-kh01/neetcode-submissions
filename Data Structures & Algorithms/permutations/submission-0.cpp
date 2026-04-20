class Solution {
public:
 vector<vector<int>> res;
 void bt(vector<int> &nums,int start){
    int n=nums.size();
    if(n==start){ res.push_back(nums); return ;}
    for(int i=start;i<n;i++){
        swap(nums[start],nums[i]);
        bt(nums,start+1);
        swap(nums[start],nums[i]);
    }
 }
    vector<vector<int>> permute(vector<int>& nums) {
        bt(nums,0);
        return res;
    }
};
