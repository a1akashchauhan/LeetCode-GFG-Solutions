//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
        // code here
        char dir = 'R';
		vector <int> ans;
		if (R == 1 || C == 1) {
			for (int i = 0; i < R; i++) {
				for (int j = 0; j < C; j++) {
					ans.push_back(a[i][j]);
				}
			}
			reverse(ans.begin(), ans.end());
			return ans;
		}
		int i = 0, j = 0;
		while (a[i][j] != 0) {
			while (dir == 'R' && j < C && a[i][j] != 0) {
				ans.push_back(a[i][j]);
				a[i][j] = 0;
				j++;
			}
			if (dir == 'R') {
				dir = 'D';
				j--;
				i++;
			}

			while (dir == 'D' && i < R && a[i][j] != 0) {
				ans.push_back(a[i][j]);
				a[i][j] = 0;
				i++;
			}
			if (dir == 'D') {
				dir = 'L';
				i--;
				j--;
			}

			while (dir == 'L' && j >= 0 && a[i][j] != 0) {
				ans.push_back(a[i][j]);
				a[i][j] = 0;
				j--;
			}
			if (dir == 'L') {
				dir = 'U';
				j++;
				i--;
			}

			while (dir == 'U' && i >= 0 && a[i][j] != 0) {
				ans.push_back(a[i][j]);
				a[i][j] = 0;
				i--;
			}
			if (dir == 'U') {
				dir = 'R';
				i++;
				j++;
			}
		}
		reverse(ans.begin(), ans.end());
		return ans;
	
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends