//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int fun(int n, int price[], int len, vector<vector<int>> &v){
        if(n==0){
            return len*price[0];
        }
        if(v[n][len]!=-1){
            return v[n][len] ;
        }
        int take=0;
        int nottake=0;
        nottake=fun(n-1, price, len, v);
        if(len>n){
            take= price[n]+fun(n, price, len-(n+1), v);
        }
        return v[n][len]=max(take, nottake); 
        
    }
    int cutRod(int price[], int n) {
        //code here
        // int n= l;
        vector<vector<int>>v(n+1, vector<int>(n+1,-1));
        return fun(n, price, n, v);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends