class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int n=s.size(),m=s[0].size();
        string ans="";
        for(int i=0;i<m;i++){
char c=s[0][i];
for(int j=1;j<n;j++)
if(i>=m || s[j][i]!=c) return ans;
ans+=c;
        }
        return ans;
    }
};