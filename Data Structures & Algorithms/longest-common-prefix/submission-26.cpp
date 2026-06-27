class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string ans="";
        int n=s[0].size(),m=s.size();
        
        for(int i=0;i<n;i++){
char c=s[0][i];
            for(int j=1;j<m;j++ )
                if(i>n || s[j][i]!=c) return ans;
                
                
                ans+=c;
            
        }

        return ans;
    }
};