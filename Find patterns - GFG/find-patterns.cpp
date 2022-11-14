//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int numberOfSubsequences(string s, string t){
        // code here +
        // int k= t.size()-1;
        int n= s.size();
        // int j=0;
        int ans=0;
        vector<bool> visited(n, 0);
        for(int i=0; i<n; i++){
            if(s[i]==t[0]){
                int j= i+1;
                int k=1;
                while(j<n and k<t.size()){
                    if(s[j]==t[k]){
                        k++;
                        s[j]='#';
                    }
                    j++;
                }
                if(k==t.size()){
                    ans++;
                }
                
            }
            
            
            
            
            // if(s[i]==t[0] and visited[i]==0){
            //     visited[i]=1;
            //     int j= i+1;
            //     int k=1;
            //     while(j<n and k< t.size()){
            //         if(s[j]==t[k] and visited[j]==0){
            //             k++;
            //             visited[j]=1;
            //         }
            //         j++;  
            //     }
            //     if(k==t.size()){
            //         ans++;
            //     }
            //     else{
            //         break;
            //     }
            //     // i++;
                
            // }
            // i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S,W;
        cin >> S >> W;
        Solution ob;
        cout << ob.numberOfSubsequences(S,W) << endl;
    }
    return 0; 
} 


// } Driver Code Ends