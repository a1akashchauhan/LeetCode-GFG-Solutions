//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    bool solve(set<int> st,vector<vector<int>> adj,int i,int n){

      

        st.insert(i);

          if(st.size()==n)return true;

        bool ans=false;

        for(auto it:adj[i]){

            if(st.find(it)==st.end()){

                ans=ans||solve(st,adj,it,n);

            }

        }

        return ans;

    }

    bool check(int n,int m,vector<vector<int>> edges)

    {

        set<int> st;

        vector<vector<int>> adj(n+1);

        for(int i=0;i<m;i++){

            adj[edges[i][0]].push_back(edges[i][1]);

            adj[edges[i][1]].push_back(edges[i][0]);

        }

        for(int i=1;i<=n;i++){

            st.clear();

           

            if(solve(st,adj,i,n)==true){

                return true;

            }

        }

        return false;

        // code here

    }
};
 

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
    	int N,M,X,Y;
    	cin>>N>>M;
    	vector<vector<int>> Edges;
    	for(int i=0;i<M;i++)
    	{
    		cin>>X>>Y;
    		Edges.push_back({X,Y});
    	}
    	Solution obj;
    	if(obj.check(N,M,Edges)){
    		cout<<"1"<<endl;
    	}
    	else
    	cout<<"0"<<endl;
	}
}
// } Driver Code Ends