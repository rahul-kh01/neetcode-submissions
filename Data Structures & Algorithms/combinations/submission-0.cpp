class Solution {
public:
   vector<vector<int>> res;
void bt(int n, int k, int s, vector<int>& cur) {
    if (cur.size() == k) { res.push_back(cur); return; }
    for (int i = s; i <= n - (k - cur.size()) + 1; i++) {  // pruning
        cur.push_back(i);
        bt(n, k, i + 1, cur);
        cur.pop_back();
    }
}
vector<vector<int>> combine(int n, int k) {
    vector<int> cur;
    bt(n, k, 1, cur);
    return res;
}
};