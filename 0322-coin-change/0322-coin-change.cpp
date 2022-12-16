class Solution {
public:

    int fun(int n, int sum, vector<int>&coins, vector<vector<int>>&dp){
        if(n==0){
            if(sum%coins[0]==0){
                return sum/coins[0];
            }
            return 1e8;
        }
        if(sum==0){
            return 0;
        }
        if(dp[n][sum]!=-1){
            return dp[n][sum];
        }
        int take=1e8;
        int nottake=1e8;
        if(coins[n]<=sum){
            take= 1+fun(n, sum- coins[n], coins, dp);
        }
        
        nottake= fun(n-1, sum, coins, dp);
        return dp[n][sum]=min(take, nottake);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n= coins.size();
        vector<vector<int>>dp(n+1, vector<int>(amount+1,-1));
        int k =fun(n-1, amount, coins,dp);
        if(k==1e8){
            return -1;
        }
        return k;

        
    }
};