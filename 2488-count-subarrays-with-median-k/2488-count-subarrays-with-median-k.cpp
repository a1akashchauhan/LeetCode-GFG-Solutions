class Solution {
public:
    long long sSum(vector<int>& nums, int k) {
        unordered_map<long long,long long> mp;
        long long sum=0,ans=0;
        mp[sum] = 1;
        for(auto it:nums){
            sum += it;
            int find = sum - k;
            if(mp.find(find) != mp.end()){
                ans += mp[find];
            }
            mp[sum]++;
        }
        return ans;
    }
    int countSubarrays(vector<int>& nums, int k) {
        vector<int> v;
        int c=0;
        for(int i: nums){
            if(i==k){
                v.push_back(0);
            }
            else if(i>k){
                v.push_back(1);
                c++;
            }
            else{
                v.push_back(-1);
            }
        }
        vector<int> u;
        vector<int>w;
        int kk;
        for(int i=0;i<v.size();i++){
            if(v[i]!=0){
                u.push_back(v[i]);
            }
            else{
                kk=i;
                break;
            }
        }
        for(int j=kk+1; j<v.size();j++){
            w.push_back(v[j]);
        }
        long long a= sSum(v,0);
        long long b=sSum(v,1);
        long long y= sSum(u,0);
        long long yy=sSum(u,1);
        long long e= sSum(w,0);
        long long ee= sSum(w,1);
        long long ans=a+b-y-yy-e-ee;
        int res=ans;
        return res;
        
    }
};