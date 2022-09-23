class Solution {
public:
    int concatenatedBinary(int n) {
        long long int ans=0;
        int mod= 1e9+7;
        int i=1;
        while(i<=n){
            int bitcount= (1+ int(log2(i)));
            ans= ((ans<<(bitcount))%mod+i)%mod;
            i++;
        }
        return ans;
    }
};