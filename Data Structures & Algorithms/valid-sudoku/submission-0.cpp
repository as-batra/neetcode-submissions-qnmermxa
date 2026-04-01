class Solution {
public:
    bool validate(vector<vector<char>>& board,int sr,int er,int sc,int ec){
        vector<int>vec(10,0);
        for(int i=sr;i<=er;i++){
            for(int j=sc;j<=ec;j++){
                if(board[i][j]=='.')continue;
                int num=board[i][j]-'0';
                vec[num]++;
                if(vec[num]>1)return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        //checing rows
        for(int i=0;i<9;i++){
            vector<int>vec(10,0);
            for(int j=0;j<9;j++){
                if(board[i][j]=='.')continue;
                int num=board[i][j]-'0';
                vec[num]++;
                if(vec[num]>1)return false;
            }
        }
        //checing cols
        for(int i=0;i<9;i++){
            vector<int>vec(10,0);
            for(int j=0;j<9;j++){
                if(board[j][i]=='.')continue;
                int num=board[j][i]-'0';
                vec[num]++;
                if(vec[num]>1)return false;
            }
        }
        // checking 3*3 matrixs
        for(int sr=0;sr<9;sr+=3){
            int er=sr+2;
            for(int sc=0;sc<9;sc+=3){
                int ec=sc+2;
                bool val=validate(board,sr,er,sc,ec);
                if(!val)return false;
            }
        }
        return true;
    }
};
