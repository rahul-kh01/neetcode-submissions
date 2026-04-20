class Solution {
public:
    int trap(vector<int>& h) {
       int lmax=0,rmax=0, l=0,r=h.size()-1,water=0;

       while(l<r){
if(h[l]<h[r]){
(h[l]>lmax)?lmax=h[l]:water+=lmax-h[l];
l++;
}
else{
  ( h[r]>rmax)?rmax=h[r]:water+=rmax-h[r];
  r--;
}
       }
       return water;
    }
};
