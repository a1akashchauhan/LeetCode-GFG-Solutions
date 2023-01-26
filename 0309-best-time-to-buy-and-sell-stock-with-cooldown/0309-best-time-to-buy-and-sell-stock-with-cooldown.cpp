class Solution {
public:
    int fun(int i, int j, int n, vector<int>&prices, vector<vector<int>>&dp){
        if(i>=n){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        if(j){  // j=1 -> buy
            return dp[i][j] = max(-prices[i]+fun(i+1, 0, n, prices, dp), fun(i+1, 1, n, prices, dp));
        }
        
            return dp[i][j] = max(prices[i]+ fun(i+2,1,n,prices, dp), fun(i+1,0, n, prices, dp));
        
        
        
    }
    
    
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,-1));
        
        return fun(0,1,n,prices,dp);
    }
};