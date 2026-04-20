class Solution {
public:
   int largestRectangleArea(vector<int>& h) {
    stack<int> st;
    h.push_back(0);
    int maxArea = 0;

    for (int i = 0; i < h.size(); i++) {
        while (!st.empty() && h[st.top()] > h[i]) {
            int top = st.top();
            st.pop();
            int left = st.empty() ? -1 : st.top();
            maxArea = max(maxArea, h[top] * (i - left - 1));
        }
        st.push(i);
    }
    return maxArea;
}

};
