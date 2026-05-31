class Solution {
public:
    int maxArea(vector<int>& h) {
        int maxarea=0,n=h.size(),l=0;
        int r=n-1;
        while(l<r){
maxarea=max(maxarea,min(h[l],h[r])*(r-l));
(h[l]<h[r])?l++:r--;

        
        }
        return maxarea;
    }
};
