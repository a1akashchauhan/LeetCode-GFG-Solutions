class Solution {
public:
    const int mod= 1e9+7;
    int fun(vector<vector<int>>& grid, int k, int sum, int i, int j, vector<vector<vector<int>>> &dp){
        if(i>=grid.size() or j>= grid[0].size() or i<0 or j<0){            
            return 0;            
        }
        if(i==grid.size()-1 and j== grid[0].size()-1){
            sum+=grid[i][j];
            if(sum%k==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        
        if(dp[i][j][sum%k]!=-1)return dp[i][j][sum%k];

        long down = fun(grid, k, sum+grid[i][j], i+1, j,dp);  
        long right = fun(grid, k,sum+grid[i][j],i, j+1, dp); 
        return dp[i][j][sum%k] = (down%mod +right%mod)%mod;
    }
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        vector<vector<vector<int>>> dp(grid.size(),vector<vector<int>>(grid[0].size(), vector<int>(51,-1)));
        return fun(grid, k, 0, 0,0, dp);
        
    }
};