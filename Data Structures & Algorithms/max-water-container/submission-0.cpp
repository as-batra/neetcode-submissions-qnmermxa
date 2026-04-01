class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int max_cap=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int height=min(heights[i],heights[j]);
                int width=j-i;
                int capacity=height*width;
                max_cap=max(max_cap,capacity);
            }
        }
        return max_cap;
    }
};
