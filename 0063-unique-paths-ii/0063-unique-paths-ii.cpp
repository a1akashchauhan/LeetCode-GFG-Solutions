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
        return fun(n-1,m-1,obstacleGrid,v);
        
        
        // for(int i=1;i<m;i++){
        //     for(int j=1; j<n; j++){
        //         if(obstacleGrid[i][j]==1){
        //             v[i][j]=0;
        //             break;
        //         }
        //         v[i][j]= v[i-1][j]+ v[i][j-1];
        //     }
        // }
        // return v[m-1][n-1];
        
    }
};