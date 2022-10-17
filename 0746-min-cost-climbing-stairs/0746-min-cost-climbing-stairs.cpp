class Solution {
public:
    
    // int fun(vector<int> &cost, int n, vector<int>&dp){
    //     if(n<2){
    //         return cost[n];
    //     }
    //     if(dp[n]!=-1){
    //         return dp[n];
    //     }
    //     return dp[n]= cost[n]+ min(fun(cost, n-1, dp), fun(cost, n-2, dp));  
    // }
    int minCostClimbingStairs(vector<int>& cost) {
        int n= cost.size();
        vector<int> dp(n+1);
        dp[0]=cost[0]; dp[1]=cost[1];
        for(int i=2; i<n;i++){
            dp[i]= cost[i]+min(dp[i-1], dp[i-2]);
        }
        return min(dp[n-1], dp[n-2]);    
    }
};