class Solution {
public:
    int n,m;
    vector<vector<int>> directions={{0,1},{1,0},{0,-1},{-1,0}};
    bool check(int idx,int i,int j,string word,vector<vector<char>>& board,vector<vector<bool>>& visited){
        if(idx==word.size()){
            return true;
        }
        for(vector<int>& dir:directions){
            int new_i=i+dir[0];
            int new_j=j+dir[1];
            if(new_i<0||new_i>=n||new_j<0||new_j>=m||visited[new_i][new_j]!=false){
                continue;
            }
            if(board[new_i][new_j]==word[idx]){
                visited[new_i][new_j]=true;
                if(check(idx+1,new_i,new_j,word,board,visited)){
                    return true;
                }
                visited[new_i][new_j]=false;
            }
        }
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        n=board.size();
        m=board[0].size();
        int idx=0;
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        bool ans=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[idx]){
                    visited[i][j]=true;
                    if(check(idx+1,i,j,word,board,visited)){
                        return true;
                    }
                    visited[i][j]=false;
                }
            }
        }
        return ans;
    }
};
