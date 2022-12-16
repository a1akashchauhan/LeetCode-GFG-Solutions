//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int fun(int n, int w, int wt[], int val[], vector<vector<int>>&dp){
        if(n==0){
            if(wt[0]<=w){
                return val[0];
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
            
            take=val[n]+fun(n-1, w-wt[n],wt, val, dp);
        }
        
            nottake= fun(n-1, w, wt, val, dp);
        
        return dp[n][w]= max(take, nottake);
        
    }
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>>dp(n+1, vector<int>(W+1,-1));
       return fun(n-1, W, wt,val,dp);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends