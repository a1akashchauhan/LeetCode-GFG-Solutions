//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDigonal(int N, vector<vector<int>> A)
	{
		// Your code goes here
		vector<int> ans;
		int k=0, l=0;
		for(int j=0; j<N; j++){
		    l = 0;
		    k = j;
		    while(k>=0){
		        ans.push_back(A[l][k]);
		        l++;
		        k--;
		    }
		}
		for(int j=1; j<N; j++){
		    l = j;
		    k = N-1;
		    while(k>=j){
		        ans.push_back(A[l][k]);
		        l++;
		        k--;
		    }
		}
		return ans;
	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends