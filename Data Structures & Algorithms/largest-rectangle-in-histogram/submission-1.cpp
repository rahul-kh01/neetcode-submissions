class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
    stack<int> st;
    h.push_back(0);
    int maxArea=0;
    for(int i=0;i<h.size();i++){
        while(!st.empty() && h[st.top()]>h[i]){
int height=h[st.top()];
st.pop();
int left=st.empty()?-1:st.top();
int width=i-left-1;
maxArea=max(maxArea,height*width);
        }
        st.push(i);
    }
    return maxArea;
    }
};
