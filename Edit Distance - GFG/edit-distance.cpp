//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    int fun(int i, int j, string a, string b, vector<vector<int>>&dp){
        if(i<0){
            return j+1;
        }
        if(j<0){
            return i+1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(a[i]==b[j]){
            return dp[i][j]=fun(i-1, j-1, a, b, dp);
        }
        int p = fun(i, j-1, a, b, dp); // insert
        int q = fun(i-1, j, a, b, dp); // delete
        int r = fun(i-1, j-1, a, b, dp); // replace
        return dp[i][j] = 1+ min({p,q,r});
    }
  
    int editDistance(string s, string t) {
        // Code here
        int n= s.size();
        int m= t.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        return fun(n-1, m-1, s, t, dp);
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends