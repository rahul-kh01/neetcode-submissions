class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
           vector<vector<string>> ans;
           unordered_map<string , vector<string>> mp;
           for(auto c:strs){
            string keys=c;
            sort(keys.begin(),keys.end());
            mp[keys].push_back(c);
           }
           for(auto c:mp)
           ans.push_back(c.second);

           return ans;
    }
};
