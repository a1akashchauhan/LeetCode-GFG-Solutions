class Solution {
public:
    int fun(int i, int j,vector<vector<int>>& v, int n, vector<vector<int>>&dp){
        if(i==n){
            return 0;
        }
        int p,q,r;
        p=q=r=INT_MAX;
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(j>0){
            p= v[i][j]+fun(i+1, j-1, v, n,dp);
        }
        if(j<n-1){
            q= v[i][j]+fun(i+1, j+1, v, n, dp);
        }
        r= v[i][j]+ fun(i+1, j, v,n, dp);
        return dp[i][j]=min(p, min(q,r));
            
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n= matrix.size();
        int ans=INT_MAX;
        vector<vector<int>> dp(n+1, vector<int>(n+1,-1));
        for(int i=0; i<n;i++){
            ans=min(ans, fun(0,i, matrix, n, dp));
        }
        return ans;
        
    }
};