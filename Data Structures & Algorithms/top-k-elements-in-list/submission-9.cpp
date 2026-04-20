class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        vector<int> ans;
        unordered_map<int ,int > mp;
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
