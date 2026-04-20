class Solution {
public:
    string mergeAlternately(string a, string b) {
    string res="";
    int i=0;
    while(i<a.size()|| i<b.size()){
if (i<a.size())res+=a[i];
if(i<b.size()) res+=b[i];
        i++;
    }
    return res;
    }
};