class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> ans;
        for(int x:nums){
            if(ans.contains(x)) return true;
            ans.insert(x);
        }
        return false;
    }
};