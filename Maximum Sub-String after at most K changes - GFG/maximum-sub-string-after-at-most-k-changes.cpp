//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int characterReplacement(string s, int k){
		    // Code here
		    int i=0;
		    int j=0;
		    int ans =0;
		    int maxi=-1;
		    unordered_map<char,int>mp;
		    
		    while(j<s.length())
		    {
		        mp[s[j]]++;
		        
		        maxi = max(maxi,mp[s[j]]);
		        
		        int to_b_chged = j-i+1-maxi;
		        
		        if(to_b_chged > k)
		        {
		            mp[s[i]]--;
		            i++;
		        }
		        
		        ans  = max(ans,j-i+1);
		        j++;
		    }
		    
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		Solution obj;
		int ans = obj.characterReplacement(s, k);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends