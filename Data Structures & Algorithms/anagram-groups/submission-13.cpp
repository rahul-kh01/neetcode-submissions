class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
          vector<vector<string>> ans;
        //   for(auto x:strs)
        //   mp[x]++;
          for(auto x:strs){
            string keys=x;
            sort(keys.begin(),keys.end());

            mp[keys].push_back(x);
          }
          for( auto x:mp)
          ans.push_back(x.second);
          return ans;

    }
};
