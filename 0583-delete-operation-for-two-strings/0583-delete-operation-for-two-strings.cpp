class Solution {
public:
    int fun(int x, int y, string &a, string &b, vector<vector<int>>& dp){
        if(x<0 or y<0){
            // if(a[x]==b[y]){
            //     return 1;
            // }
            return 0;
        }
        if(dp[x][y]!=-1){
            return dp[x][y];
        }
        if(a[x]==b[y]){
            return dp[x][y]=1+fun(x-1, y-1, a,b, dp);
        }
        return dp[x][y]=max(fun(x-1, y, a,b, dp), fun(x, y-1, a,b, dp));
    }
    int minDistance(string word1, string word2) {
        int n= word1.size();
        int m= word2.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1,-1));
        int k= fun(n-1,m-1, word1, word2, dp);
        return n+m- 2*k;
    }
};