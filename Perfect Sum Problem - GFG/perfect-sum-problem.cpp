//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	const int mod= 1e9+7;
	int fun(int n, int t, int a[], vector<vector<int>>&dp){
        if(n==0){
//             return a[0]==t;
           if(t==0 and a[n]==0){
               return 2;
           }
            if(t==0){
                return 1;
            }
            if(a[n]==t){
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
int tab(int n, int tar,int num[], vector<vector<int>>&dp){
    for(int i=0;i<n;i++){
       dp[i][0]=1;
    }
    dp[0][num[0]]=1;
    for(int i=1;i<n;i++){
        for(int j=1;j<=tar;j++){
            int nottake= dp[i-1][j];
            int take=0;
            if(num[i]<=j){
                take= dp[i-1][j-num[i]];
            }
            dp[i][j]=(take%mod+nottake%mod)%mod;

        }
    }
    return dp[n-1][tar];
}

	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        vector<vector<int>>dp(n, vector<int>(sum+1,-1));
        return fun(n-1, sum, arr, dp);
        
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends