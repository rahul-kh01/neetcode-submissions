class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
      h.push_back(0);
      int n=h.size(),maxarea=0;
      stack<int> st;
      for(int i=0;i<n;i++){
        while(!st.empty()&& h[st.top()]>h[i]){
          int top=st.top();
          st.pop();
          int left=st.empty()?-1:st.top();
          maxarea=max(maxarea,h[top]*(i-left-1));
          
        }
        st.push(i);

      }
      return maxarea;

    }
};
