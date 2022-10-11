//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        // code here
        stack<char>st;

     string res="";

     for(int i=0;i<s.size();i++){

         if(s[i]==']'){

             string temp;

             // we will store all character between  [] in temp string

             while(!st.empty() && st.top()!='['){

                 temp+=st.top();

                 st.pop();

            }

             st.pop(); // remove '['

             reverse(temp.begin(),temp.end()); 

             

             string num; // num to store the number of times we have to repeat

             while(!st.empty() && isdigit(st.top())){

                 num+=st.top();

                 st.pop();

             }

             reverse(num.begin(),num.end()); 

             int n=stoi(num); // => string to int

             // again pushing back characters k times in stack

             // we have basically remove 1 pair of brackets from stack

             for(int i=0;i<n;i++){

                 for(auto t:temp){

                     st.push(t);

                 }

             }

         }else

            st.push(s[i]);

     }

     while(!st.empty()){

         res+=st.top();

         st.pop();

     }

     reverse(res.begin(),res.end()); 

     return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends