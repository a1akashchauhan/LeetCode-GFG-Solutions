class Solution {
public:
    
    int fun(int i, int j,string a, string b, vector<vector<int>>&dp){
        if(i==0){
            return j;
        }
        if(j==0){
            return i;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(a[i-1]==b[j-1]){
            return dp[i][j]=fun(i-1,j-1,a,b,dp);
        }
        int k= fun(i,j-1,a,b,dp); //insert
        int l= fun(i-1,j,a,b,dp); //delete
        int m= fun(i-1, j-1, a,b,dp); //replace
        
        return dp[i][j]=1+min({k,l,m});
        
    }
    int minDistance(string word1, string word2) {
        int n= word1.size();
        int m= word2.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1,-1));
        return fun(n,m,word1,word2,dp);
        
        
    }
};