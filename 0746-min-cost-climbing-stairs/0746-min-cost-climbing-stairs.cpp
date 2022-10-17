class Solution {
public:
    
    int fun(vector<int> &cost, int n, vector<int>&dp){
        if(n<2){
            return cost[n];
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        return dp[n]= cost[n]+ min(fun(cost, n-1, dp), fun(cost, n-2, dp));  
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n= cost.size();
        vector<int> dp(n+1,-1);
        return min(fun(cost, n-1,dp), fun(cost, n-2,dp));
    }
};