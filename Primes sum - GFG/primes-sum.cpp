//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    string isSumOfTwo(int n){
        vector<bool> nums(n, true);
        vector<int> primes;
        primes.push_back(1);
        for(int i=2;i<n;i++){
            for(int j=2*i;j<n;j+=i){
                nums[j] = false;
            }
            if(nums[i]==true){
                primes.push_back(i);
            }
        }
        
        int i=0, j=primes.size()-1;
        while(j>i){
            int temp = primes[i]+primes[j];
            if(temp==n) return "Yes";
            else if(temp>n) j--;
            else i++;
        }
        return "No";
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends