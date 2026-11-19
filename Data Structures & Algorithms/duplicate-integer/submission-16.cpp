class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s;
        for(int c:nums){
            if(s.contains(c)) return true;
            s.insert(c);
        }
        return false;
    }
};