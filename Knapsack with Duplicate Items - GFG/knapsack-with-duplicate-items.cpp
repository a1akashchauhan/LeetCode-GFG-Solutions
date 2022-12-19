//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int fun(int n, int w, int wt[], int val[], vector<vector<int>>&dp){
        if(n==0){
            if(wt[0]<=w){
                return val[0]*(w/wt[0]);
            }
            else{
                return 0;
            }
        }
        if(dp[n][w]!=-1){
            return dp[n][w];
        }
        int take =-1e9;
        int nottake= -1e9;
        if(wt[n]<=w){
            
            take=val[n]+fun(n, w-wt[n],wt, val, dp);
        }
        
            nottake= fun(n-1, w, wt, val, dp);
        
        return dp[n][w]= max(take, nottake);
        
    }
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        vector<vector<int>>dp(N+1, vector<int>(W+1,-1));
        return fun(N-1, W, wt,val,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends