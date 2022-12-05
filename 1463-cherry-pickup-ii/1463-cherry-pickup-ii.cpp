class Solution {
public:
    
    int fun(int i, int j1, int j2, int n, int m, vector<vector<int>> &grid,vector<vector<vector<int>>>&dp){
        if(j1<0 or j1>=m or j2>=m or j2<0){
            return -1e8;
        }
        if(i==n-1){
            if(j1==j2){
                return grid[i][j1];
            }
            else{
                return grid[i][j1]+grid[i][j2];
            }
        }
        int mx=-1e8;
        if(dp[i][j1][j2]!=-1){
            return dp[i][j1][j2];
        }
        else{
            
        
        for(int di=-1;di<2;di++){
            for(int dj=-1; dj<2 ;dj++){
                // sum= max(sum, grid[i][j]+fun(i+1,j1+di,j2+dj,n,0,grid));
                int value=0;
                if(j1==j2){
                    value= grid[i][j1];
                }
                else{
                    value= grid[i][j2]+grid[i][j1];
                }
                int ans= value+ fun(i+1, j1+di, j2+dj, n, m, grid, dp);
                dp[i][j1][j2] = mx = max(mx,ans);  
            }
            
        }
        }
        return dp[i][j1][j2];
    }
    
    
    int cherryPickup(vector<vector<int>>& grid) {
        int n=grid.size();
        int m= grid[0].size();
        int ans=0;
        vector<vector<vector<int>>>dp(100,vector<vector<int>>(100,vector<int>(100,-1)));
        return fun(0,0,m-1,n,m,grid,dp);
        
    }
};