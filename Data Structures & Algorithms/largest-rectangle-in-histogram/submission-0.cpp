class Solution {
    public:
        int largestRectangleArea(vector<int>& heights) {
                int n = heights.size();
                        int maxArea = 0;

                                for (int i = 0; i < n; i++) {
                                            int height = heights[i];

                                                        int left = i;
                                                                    while (left >= 0 && heights[left] >= height)
                                                                                    left--;

                                                                                                int right = i;
                                                                                                            while (right < n && heights[right] >= height)
                                                                                                                            right++;

                                                                                                                                        int width = right - left - 1;
                                                                                                                                                    maxArea = max(maxArea, height * width);
                                                                                                                                                            }

                                                                                                                                                                    return maxArea;
                                                                                                                                                                        }
                                                                                                                                                                        };

