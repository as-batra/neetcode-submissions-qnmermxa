class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>leftMax(n,0);
        vector<int>rightMax(n,0);
        leftMax[0]=height[0];
        for(int i=1;i<n;i++){
            leftMax[i]=max(height[i],leftMax[i-1]);
        }
        rightMax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            rightMax[i]=max(height[i],rightMax[i+1]);
        }
        int sum=0;
        for(int i=0;i<n;i++){
            int heightt=min(leftMax[i],rightMax[i])-height[i];
            sum+=heightt;
        }
        return sum;
    }
};
