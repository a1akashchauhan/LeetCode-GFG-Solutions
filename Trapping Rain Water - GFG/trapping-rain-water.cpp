//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        
        int maxleft= arr[0];
        int maxright= arr[n-1];
        int left= 1;
        int right = n-2;
        long long ans=0;
        if(n<=2){
            return ans;
        }
        
        while(left<=right){
            if(maxleft < maxright){
                if(arr[left]< maxleft){
                    ans+= (maxleft-arr[left]);
                }
                else{
                    maxleft= arr[left];
                }
                left++;
            }
            else{
                if(arr[right]< maxright){
                    ans+= (maxright- arr[right]);
                }
                else{
                    maxright= arr[right];
                }
                right--;
            }
        }
        return ans; 
        
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends