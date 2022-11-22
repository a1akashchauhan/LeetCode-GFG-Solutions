//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int countTriplets(vector<int>nums){
	    // Code here.
	    int n= nums.size();
	    int ans=0;
	    for(int j=1; j<n-1;j++){
	        int small=0;
	        for(int i=0;i<j;i++){
	            
	            if(nums[i]<nums[j]){
	                small++;
	            }
	        }
	        int large=0;
	        for(int i=j+1;i<n;i++){
	            if(nums[i]>nums[j]){
	                large++;
	            }
	        }
	        ans+=small*large;
	    }
	    
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans = ob.countTriplets(nums);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends