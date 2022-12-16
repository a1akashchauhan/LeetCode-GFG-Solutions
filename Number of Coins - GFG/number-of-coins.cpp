//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int fun(int n, int sum, int coins[], vector<vector<int>>&dp){
        if(n==0){
            if(sum%coins[0]==0){
                return sum/coins[0];
            }
            return 1e8;
        }
        if(sum==0){
            return 0;
        }
        if(dp[n][sum]!=-1){
            return dp[n][sum];
        }
        int take=1e8;
        int nottake=1e8;
        if(coins[n]<=sum){
            take= 1+fun(n, sum- coins[n], coins, dp);
        }
        
        nottake= fun(n-1, sum, coins, dp);
        return dp[n][sum]=min(take, nottake);
    }
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	   // int n= coins.size();
        vector<vector<int>>dp(M+1, vector<int>(V+1,-1));
        int k =fun(M-1, V, coins,dp);
        if(k==1e8){
            return -1;
        }
        return k;
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends