class Solution {
public:
    int maxArea(vector<int>& h) {
        int ans=0,n=h.size();
int l=0,r=h.size()-1;
while(l<=r){
    ans=max(ans,min(h[r],h[l])*(r-l));
    (h[l]<h[r])?l++:r--;
}
return ans;
    }
};
