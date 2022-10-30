//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {

public:

 long long int NoOfChicks(int n){

     long long int curr=1;

     unordered_map<long long int,long long int> mp;

     mp[0]=1;

     for(int i=1;i<n;i++)

     {

        if(i>=6)

        {

            int exp=i-6;

            curr -= mp[exp];

        }

        long long int new_chicks = curr+2*curr;

        mp[i]=2*curr;

        curr=new_chicks;

     }

     return curr;

 }

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		long long int ans = obj.NoOfChicks(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends