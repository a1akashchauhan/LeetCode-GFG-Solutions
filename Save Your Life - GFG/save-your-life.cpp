//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){

          // code here        

          

          // at 7:48;

     

          int i;

          

          unordered_map<char,int>m1;

          for(i=0;i<n;i++)

          {

              m1[x[i]]++;

              m1[x[i]]=b[i];

          }

          

          

          vector<int>v;

     

               vector<pair<char,int>>vp;

          for(i=0;i<w.size();i++)

          {

              int xx=w[i];

              vp.push_back(make_pair(w[i],xx));

          }

          

          for(i=0;i<vp.size();i++)

          {

              if(m1.find(vp[i].first)!=m1.end())

              {

                  vp[i].second=m1[vp[i].first];     

              }

          }

          vector<int>final; 

          for(i=0;i<vp.size();i++)

          {

              final.push_back(vp[i].second);

          }

          

          // now kadane's 

          int max=-1000000,s=0,start=0,r,l;

 

          for(i=0;i<final.size();i++)

          {

              s+=final[i];

              if(s>max)

              {

                  max=s;

                  l=start;

                  r=i;

              }

              if(s<0)

              {

                  s=0;

                  start=i+1;

              }

          }

          return w.substr(l,r-l+1);

          

          // at one shot, and at 8:13.

          // took 25 min. but cracked it in single attempt.

          

          

          

          

          

          

          

      }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends