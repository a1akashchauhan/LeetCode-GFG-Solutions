//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool fun(int n, vector<int> &arr, vector<vector<int>>&dp, int t){
        if(t==0){
            return 1;
        }
        if(n==0){
            return arr[n]==t;
        }
        if(dp[n][t]!=-1){
            return dp[n][t];
        }
        bool nottake=fun(n-1,arr, dp,t);
        bool take=false;
        if(arr[n]<=t){
            take= fun(n-1, arr, dp , t-arr[n]);
        }
        return dp[n][t]=nottake|take;
    }
 

    bool isSubsetSum(vector<int>arr, int sum){

        

        int n = arr.size();

        vector<vector<int>> dp(n , vector<int>(sum+1 , -1));

        

        return fun(n-1,arr,dp,sum); 

        

    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends