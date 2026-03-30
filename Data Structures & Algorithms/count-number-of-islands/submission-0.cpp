class Solution {
public:
    void floodfill(int i,int j,vector<vector<char>>& grid,vector<vector<bool>>&visited){
        int n=grid.size();int m=grid[0].size();
        visited[i][j]=true;
        queue<pair<int,int>>q;
        int dx[4]={-1,1,0,0};
        int dy[4]={0,0,1,-1};
        q.push({i,j});
        while(!q.empty()){
            auto [x,y]=q.front();q.pop();
            for(int i=0;i<4;i++){
                int a=x+dx[i];
                int b=y+dy[i];
                if(a>=0 && a<n && b>=0 && b<m && grid[a][b]=='1'&& !visited[a][b]){
                    visited[a][b]=true;
                    q.push({a,b});
                }
            }
            
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'&& !visited[i][j]){
                    cnt++;
                    floodfill(i,j,grid,visited);
                }
            }
        }
        return cnt;
    }
};
