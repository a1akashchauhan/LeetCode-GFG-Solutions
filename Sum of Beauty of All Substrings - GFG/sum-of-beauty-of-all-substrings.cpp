//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int beauty(vector<int>&v){
        int mf=-1;
        int lf= 1e9;
        for(int i: v){
            mf= max(mf,i);
            if(i>0){
                lf= min(lf,i);
            } 
        }
        return mf-lf;
    }
    int beautySum(string s) {
        int n= s.size();
        int ans=0;
        for(int i=0; i<n; i++){
            vector<int>v(26,0);
            for(int j=i; j<n;j++){
                v[s[j]-'a']++;
                ans+=beauty(v);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends