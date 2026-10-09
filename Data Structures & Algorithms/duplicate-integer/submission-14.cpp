class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> ans;
        int n=nums.size();
        for(int x:nums){
          if(ans.contains(x)) return true;
          ans.insert(x);
        }
        return false;
    }
};