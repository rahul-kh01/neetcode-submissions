class Solution {
public:
    int maxArea(vector<int>& h) {
        int n=h.size(),maxarea=0,l=0,r=h.size()-1;
        while(l<r){
            maxarea=max(maxarea,min(h[l],h[r])*(r-l));
            (h[l]<h[r])?l++:r--;
        }
        return maxarea;

    }
};
