//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
/*You are required to complete this method*/


    int fun(int i, int j, string &s, string &p, vector<vector<int>>&dp ){
        if(i<0 and j<0){
            return true;
        }
        if(i>=0 and j<0){
            return false;
        }
        if(i<0 and j>=0){
            for(int k=j;k>=0;k--){
                if(p[k]!='*'){
                    return false;
                }
            }
            return true;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s[i]==p[j] or p[j]=='?'){
            return dp[i][j]=fun(i-1, j-1, s, p, dp);
        }
        if(p[j]=='*'){
            return dp[i][j]=fun(i-1,j, s, p, dp) | fun(i, j-1, s, p, dp);
        }
        return dp[i][j]=false;     
    }
    int wildCard(string p,string s)
    {
        int n= s.size();
        int m= p.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        return fun(n-1, m-1, s, p, dp);
    }
};

//{ Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
           string pat,text;
           cin>>pat;
cin.ignore(numeric_limits<streamsize>::max(),'\n');
           cin>>text;
           Solution obj;
           cout<<obj.wildCard(pat,text)<<endl;
   }
}

// } Driver Code Ends