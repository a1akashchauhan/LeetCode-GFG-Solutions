class Solution {
public:
    int fun(int i, int j,int n,vector<vector<int>>&v,vector<vector<int>>&dp){
        if(i==n){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        return dp[i][j]=min(fun(i+1, j,n, v,dp)+v[i][j], fun(i+1, j+1,n, v,dp)+v[i][j]);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n= triangle.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return fun(0,0,n,triangle,dp);
    }
};