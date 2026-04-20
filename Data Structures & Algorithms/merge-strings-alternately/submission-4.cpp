class Solution {
public:
    string mergeAlternately(string a, string b) {
        string res=""; 
        int n=a.size(),m=b.size(),i=0;

        while(i<n||i<m){
            if(i<n) res+=a[i];
            if(i<m) res+=b[i];
            i++;
            
        }
        return res;
    }
};