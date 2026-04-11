class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();int m=matrix[0].size();
        int selected=n-1;
        for(int i=0;i<n;i++){
            if(matrix[i][0]>target){
                selected=i-1;
                break;
            }
        }
        if(selected<0 )return false;
        for(int j=0;j<m;j++){
            if(matrix[selected][j]==target)return true;
        }
        return false;
    }
};
