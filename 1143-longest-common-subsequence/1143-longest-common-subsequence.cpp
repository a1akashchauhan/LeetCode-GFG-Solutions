class Solution {
public:
    int fun( int n, int m, string &a, string &b, vector<vector<int>>&dp){
        if(n==0 or m==0){
            return 0;
        }
        if(dp[n][m]!=-1){
            return dp[n][m];
        }
        if(a[n-1]==b[m-1]){
            return dp[n][m]=1+fun(n-1,m-1,a,b,dp);
        }
        else{
            return dp[n][m]=max(fun(n-1,m,a,b,dp),fun(n,m-1,a,b,dp));
        }
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n= text1.size();
        int m= text2.size();
        vector<vector<int>>dp(1001,vector<int>(1001,-1));
        int k= fun(n,m,text1, text2,dp);
        string ans;
        // int index=k-1;
        int i,j=0;
        while(i>0 and j>0){
            if(text1[i-1]==text2[j-1]){
                ans+=text1[i-1];
            }
            else if(dp[i-1][j]>dp[i][j-1]){
                i--;
            }
            else{
                j--;
            }
        }
        return k;
    }
};