class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        unordered_map<int ,int>mp;
        vector<int> ans;
        for(auto c:nums)
        mp[c]++;
        for(auto x:mp)
        pq.push({x.second,x.first});
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;

    }
};
