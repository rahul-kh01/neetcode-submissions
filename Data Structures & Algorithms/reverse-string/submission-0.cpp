class Solution {
public:
void rev(int s,int e, vector<char> &str){
    while(s<e){
        swap(str[s++],str[e--]);
    }
}
    void reverseString(vector<char>& str) {
        int s=0,e=str.size()-1;
        rev(s,e,str);
    }
};