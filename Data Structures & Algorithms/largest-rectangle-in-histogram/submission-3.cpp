class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int> st;
        h.push_back(0);
        int maxarea=0,n=h.size();
        for(int i=0;i<n;i++){
            while(!st.empty()&&h[st.top()]>h[i]){
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
