class Solution {
public:
    int fun(int i, int k, int n, vector<int>&nums, vector<vector<int>>&dp){
        if(i==n){
            return 0;
        }
        if(dp[i][k+1]!=-1){
            return dp[i][k+1];
        }
        
        int len=-1;
        if(k==-1 or nums[k]<nums[i]){
            len=( 1+fun(i+1, i, n, nums, dp));
        }
        len=  max(len, fun(i+1, k, n, nums, dp));
        return dp[i][k+1]=len;
    }
    
    
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1,-1));
        return fun(0,-1, n, nums, dp);   
        
    }
};