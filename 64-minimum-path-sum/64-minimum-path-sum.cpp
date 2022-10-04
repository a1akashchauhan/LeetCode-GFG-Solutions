class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int x= grid.size();
        int y= grid[0].size();
        vector<vector<int>> dp(x, vector<int>(y,0));
        dp[0][0]= grid[0][0];
        for(int i=1; i<x;i++){
            dp[i][0]= grid[i][0]+dp[i-1][0];
        }
        for(int i=1; i<y;i++){
            dp[0][i]= grid[0][i]+dp[0][i-1];
        }
        for(int i=1;i<x;i++){
            for(int j=1;j<y; j++){
                dp[i][j]= grid[i][j]+ min(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[x-1][y-1];    
    }
};