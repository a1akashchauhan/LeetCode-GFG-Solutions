//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
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
    int findMinInsertions(string s){
        // code here 
        string t=s;
        reverse(t.begin(), t.end());
        int x=s.size();
        vector<vector<int>> dp(s.size()+1, vector<int>(s.size()+1, -1));
        return x-fun(x-1, x-1, s, t, dp);
        
    }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.findMinInsertions(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends