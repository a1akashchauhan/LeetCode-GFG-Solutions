//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    #define ll long long
    ll ans=0;
    void fun(ll n, ll x){
        if(n>x)return ;
        ans=max(ans, n);
        int ls=n%10;
        ll nn=n;
        if(ls==0){
            nn=10*n+ls+1;
            fun(nn, x);
        }else if(ls==9){
            nn=10*n+ls-1;
            fun(nn, x);
        }else{
            nn=10*n+ls+1;
            fun(nn, x);
            nn=10*n+ls-1;
            fun(nn, x);
        }
    }
    long long jumpingNums(long long x) {
        for(int i=0;i<=9;i++){
            fun(i, x);
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.jumpingNums(X) << endl;
    }
    return 0;
}
// } Driver Code Ends