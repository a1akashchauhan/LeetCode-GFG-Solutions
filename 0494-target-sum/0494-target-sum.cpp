class Solution {
public:
    const int mod = 1e9+7;
    int fun(int n, int t, vector<int>&a, vector<vector<int>>&dp){
        if(n==0){
           if(t==0 and a[n]==0){
               return 2;
           }
            if(t==0 or a[0]==t){
                return 1;
            }
            return 0;
        }
        if(dp[n][t]!=-1){
            return dp[n][t];
        }
        int nottake= fun(n-1, t, a, dp);
        int take=0;
        if(a[n]<=t){
            take = fun(n-1, t-a[n], a, dp);
        }
        return dp[n][t]=(take%mod+nottake%mod)%mod;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        // sort(nums.begin(), nums.end());
        int total= 0;
        int n= nums.size();
        for(int i: nums){
            total+=i;
        }
        // 1-2=t;
        // total-2*s2=target;
        // s=total-target/2;
        // find(s);
        int k= total- target;
        if(k%2 or k<0){
            return 0;
        }
        else{
            k=k/2;
            vector<vector<int>>dp(n, vector<int>(k+1,-1));
            return fun(n-1, k,nums, dp);
            
        }
        
        
    }
};