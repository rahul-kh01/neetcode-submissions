class Solution {
    public int largestRectangleArea(int[] h) {
      h=Arrays.copyOf(h,h.length+1);
        int n=h.length,maxarea=0;
        Stack<Integer> st=new Stack<>();
        for(int i=0;i<n;i++){
            while(!st.isEmpty() && h[st.peek()]>h[i]){
                int top=st.peek();
                st.pop();
                int left=st.isEmpty()?-1:st.peek();
                maxarea=Math.max(maxarea,h[top]*(i-left-1));

            }
            st.push(i);
        }

return maxarea;
    }
}
