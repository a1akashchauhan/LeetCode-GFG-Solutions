//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    
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
    
    
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        vector<vector<int>> dp(x+1, vector<int>(y+1, -1));
        return fun(x-1, y-1, s1, s2, dp);
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends