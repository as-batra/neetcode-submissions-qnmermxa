class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int max_area=0;
        int i=0;int j=n-1;
        while(i<j){
            int width=j-i;
            int height=min(heights[i],heights[j]);
            int area=width*height;
            max_area=max(max_area,area);
            if(heights[i]>heights[j]){
                j--;
            }
            else i++;

        }
        return max_area;
    }
};
