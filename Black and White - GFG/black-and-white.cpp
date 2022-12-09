//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

long long numOfWays(int n, int m);

int main() {
    // code
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        cout << numOfWays(n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


//Function to find out the number of ways we can place a black and a 
//white Knight on this chessboard such that they cannot attack each other.
bool isValid(int i, int j, int n, int m){
    if(i>=n or j>=m or i<0 or j<0){
        return false;
    }
    return true;
}
long long numOfWays(int N, int M)
{
    // write code here
    vector<int> x= {-2, -1, 1, 2, -2, -1, 1, 2};
    vector<int> y= {-1, -2, -2, -1, 1, 2, 2, 1};
    int mod= 1e9+7;
    long long total= N*M;
    long long ans=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            long long c=0;
            for(int k=0;k<8;k++){
                if(isValid(i+x[k], j+y[k], N, M)){
                    c++;
                }
            }
            ans+=total-1-c;
            ans%=mod;
        
        }
    }
    return ans;
}