class Solution {
public:
    int gray(int n) {
        return n ^ (n >> 1);
    }
    vector<int> grayCode(int n) {
        n=1<<n;
        vector<int> ans(n); 
        for(int i=0; i<n; i++){
            ans[i]= gray(i);
        }
        return ans;
    }
};