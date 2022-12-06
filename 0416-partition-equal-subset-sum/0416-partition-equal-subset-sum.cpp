class Solution {
public:

    bool fun(int n, int sum, vector<int> &arr, vector<vector<int>>&dp){
    if(sum==0){
        return 1;
    }
    else if(n==0){
        return false;
    }
    if(dp[n][sum]!=-1){
        return dp[n][sum];
    }
    else{
        
    
    if(arr[n-1]>sum){
        return dp[n][sum]= fun(n-1, sum, arr,dp);
    }
    else{
        return dp[n][sum]=fun(n-1, sum, arr,dp)|| fun(n-1,sum-arr[n-1], arr,dp);
    }
    }
}
    
    bool canPartition(vector<int>& nums) {
        int n= nums.size();
        int sum=0;
        for(int i: nums){
            sum+=i;
        }
        if(sum%2){
            return false;
        }
        sum= sum/2;
        // int t[n][sum];
        vector<vector<int>>t(n+1, vector<int>(sum+1,-1));
        // memset(t,-1, sizeof(t));
        return fun(n,sum,nums,t);
        
    }
};