//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isItPossible(string S, string T, int M, int N) {
        // code here
        if(M != N) return 0;

        

        int i = 0, j = 0;

        // i for S, j for T

        while(i < M && j < N){

            if(S[i] == T[j]){

                if(S[i] == 'A'){ // A can be moved to left only

                    if(i < j) return 0;

                }else if(S[i] == 'B'){ // B can be moved to right only

                    if(i > j) return 0;

                }

                i++;

                j++;

            }else if(S[i] == '#'){

                i++;

            }else{

                j++;

            }

        }

        

        while(i < M){

            if(S[i] != '#') return 0;

            i++;

        }

        

        while(j < N){

            if(T[j] != '#') return 0;

            j++;

        }

        

        return 1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, T;
        cin >> S >> T;
        int M = S.length(), N = T.length();
        Solution ob;
        cout << ob.isItPossible(S, T, M, N);
        cout << "\n";
    }
}
// } Driver Code Ends