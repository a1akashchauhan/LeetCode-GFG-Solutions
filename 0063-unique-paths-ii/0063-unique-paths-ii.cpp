class Solution {
public:
    int fun(int n, int m, vector<vector<int>> &grid, vector<vector<int>>&dp){
        if(m<0 || n<0){
            return 0;
        }
        if(grid[m][n]==1){
            return 0;
        }
        if(m==0 and n==0){
            return 1;
        }
        if(dp[m][n] !=-1){
            
            return dp[m][n];
            
        }
        
        int up = fun(n,m-1, grid, dp);
        int left = fun(n-1, m, grid, dp);
        return dp[m][n] =up+left;
        
    }
    
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m= obstacleGrid.size();
        int n= obstacleGrid[0].size();
        
        vector<vector<int>>v(m, vector<int>(n,-1));
        // return fun(n-1,m-1,obstacleGrid,v);
        vector<vector<int>>t(m+1, vector<int>(n+1,0));
        // t[0][0]=1;
        
        for(int i=0;i<m;i++){
            for(int j=0; j<n; j++){
                if(obstacleGrid[i][j]==1){
                    t[i][j]=0;
                    // break;
                }
                else if(i==0 and j==0){
                    t[i][j]=1;
                }
                else{
                    int up=0, down=0;
                    if(i>0) up = t[i-1][j];
                    if(j>0) down= t[i][j-1];
                    t[i][j]= up+down;
                }
                
            }
        }
        return t[m-1][n-1];
        
    }
};