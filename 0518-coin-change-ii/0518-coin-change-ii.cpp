class Solution {
public:
    int fun(int n, int sum, vector<int>&coins,vector<vector<int>>&dp){
        if(n==0){
            return sum%coins[0]==0;
        }
        if(dp[n][sum]!=-1){
            return dp[n][sum];
        }
        int take=0;
        int nottake= fun(n-1,sum, coins,dp);
        if(coins[n]<=sum){
            take=fun(n,sum-coins[n],coins,dp);
        }
        
        return dp[n][sum]=take+nottake;
    }
    int change(int amount, vector<int>& coins) {
        int n= coins.size();
        vector<vector<int>>dp(n+1, vector<int>(amount+1,-1));
        return fun(n-1, amount, coins,dp);
    }
};