class Solution {
public:
    string mergeAlternately(string a, string b) {
        int m=a.size(),n=b.size();
string res="";
int i=0;
        while(i<m || i<n){
if(i<m) res+=a[i];
if(i<n) res+=b[i];
i++;
        }
        return res;

    }
};