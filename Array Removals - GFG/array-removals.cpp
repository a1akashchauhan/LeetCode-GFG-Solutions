//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int removals(vector<int>& a, int k){
        sort(a.begin(), a.end());
        int n=a.size();
        int ans=0;
        for(int i=0;i<n;i++){
            auto it=upper_bound(a.begin(), a.end(), a[i]+k)-begin(a)-1;
            int tot=it-i+1;
            ans=max(ans, tot);
        }
        return n-ans;
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution ob;
        int ans = ob.removals(arr,k);
        
        cout<<ans<<endl;
    }
}



// } Driver Code Ends