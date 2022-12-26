//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
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
    
    int shortestCommonSupersequence(string s1, string s2, int m, int n)
    {
        //code here
        vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
        return m+n-fun(m-1, n-1, s1, s2, dp);
    }
};

//{ Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}


// } Driver Code Ends