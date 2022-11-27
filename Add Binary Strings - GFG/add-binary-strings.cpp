//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	string addBinary(string A, string B)
	{
	    reverse(A.begin(),  A.end());
	    reverse(B.begin(), B.end());
	    string ans = "";
	    int i = 0;
	    int j = 0;
	    int carry = 0;
	    while(i < A.length() || j < B.length() || carry != 0 ){
	        int val1 = (i < A.length()) ? A[i] - '0' : 0;
	        int val2 = (j < B.length()) ? B[i] - '0' : 0;
	        int sum = val1 + val2 + carry;
	        if(sum % 2 == 0){
	            ans += '0';
	        }
	        else{
	            ans += '1';
	        }
	        carry = sum/2;
	        i++;
	        j++;
	    }
	    while(ans.back() == '0'){
	        ans.pop_back();
	    }
	    reverse(ans.begin(), ans.end());
	    return ans;
	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends