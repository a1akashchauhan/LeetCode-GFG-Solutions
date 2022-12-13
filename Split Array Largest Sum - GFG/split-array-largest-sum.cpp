//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int splitArray(int arr[] ,int N, int K) {
        // code here
        int low=0;
        int high=0;
        for(int i=0; i<N;i++){
            low= max(low,arr[i]);
            high+=arr[i];
        }
        int ans=0;
        // return low;
        while(low<high){
            int mid= low+(high-low)/2;
            if(isPossible(arr, N, mid,K)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        if(isPossible(arr,N,low,K)) ans= low;
        return ans;
    }
    bool isPossible(int arr[], int n, int mx, int k){
        int cnt=0;
        int currsum=0;
        for(int i=0;i<n;i++){
            if(currsum+arr[i]<=mx){
                currsum+=arr[i];
                
            }
            else{
                cnt++;
                currsum=arr[i];
            }
            
        }
        if(currsum<=mx) cnt++;
        return cnt<=k;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends