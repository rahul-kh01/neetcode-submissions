class Solution {
public:
    string mergeAlternately(string a, string b) {
        int n=a.size(),m=b.size(),i=0;
        string res="";
        while(i<n || i<m){
if(i<n)res+=a[i];
if(i<m) res+=b[i];
i++;
        }
        return res;
    }
};