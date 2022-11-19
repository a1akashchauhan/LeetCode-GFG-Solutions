class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> p(k,0);
        int sum=0;
        for(int i: nums){
            i=i%k+k;
            sum=(sum%k+i)%k;
            sum%=k;
            p[sum]++;
        }
        int ans=p[0];
        for(auto i: p){
            ans+=(i*(i-1)/2);
        }
        return ans;
    }
};