//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  const int mod= 1e8;
  int fun(int n, vector<int> &dp){
      if(n<=3){
          return n;
      }
      if(dp[n]!=-1){
          return dp[n];
      }
      return dp[n]= (((fun(n-1,dp))%mod)+ ((fun(n-2,dp))%mod))%mod;
      
  }
    int fillingBucket(int N) {
        // code here
        vector<int> dp(N+1,-1);
        return fun(N,dp);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends