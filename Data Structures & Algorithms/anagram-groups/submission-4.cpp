class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
          vector<vector<string>> ans;
          unordered_map<string,vector<string>> mp;
          for(string x:strs){
            string keys=x;
            sort(keys.begin(),keys.end());
            mp[keys].push_back(x);
          }
          for(auto it:mp){
            ans.push_back(it.second);
          }
          return ans;
    }
};
