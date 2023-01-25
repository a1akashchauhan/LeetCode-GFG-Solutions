class Solution {
public:
    int fun(int i, int j, int n, vector<int>&prices, vector<vector<vector<int>>>&dp, int lim){
        if(i==n or lim==0){
            return 0;
        }
        if(dp[i][j][lim]!=-1){
            return dp[i][j][lim];
        }
        if(j){
            return dp[i][j][lim]= max(-prices[i]+ fun(i+1, 0,n, prices, dp, lim) ,  fun(i+1, 1,n, prices, dp, lim));
        }
        else{
            return dp[i][j][lim]= max(prices[i] + fun(i+1, 1,n, prices, dp, lim-1), fun(i+1,0,n, prices, dp, lim));
        }
        return dp[i][j][lim]; 
    }
    
    
    int maxProfit(int k, vector<int>& prices) {
        int n= prices.size();
        vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(2, vector<int>(k+1,-1)));
        return fun(0,1,n,prices, dp,k);
    }
};