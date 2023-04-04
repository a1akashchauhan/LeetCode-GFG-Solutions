class Solution {
public:
    
    bool possible(vector<int>&v, int m, int k){
        int n= v.size();
        int s=0;
        int t=0;
        for(int i: v){
            if(s+i <= m){
                s+=i;
            }
            else{
                s=i;
                t++;
            }
        }
        if(s>0){
            t++;
        }
        return t<=k;
    }
    
    
    int splitArray(vector<int>& nums, int k) {
        int n= nums.size();
        int l=0;
        int r=0;
        for(int i:nums){
            l=max(i,l);
            r+=i;
        }
        while(l+1<r){
            int m= l+(r-l+1)/2;
            if(possible(nums, m, k)){
                r=m;
            }
            else{
                l=m;
            }
        }
        if(possible(nums, l, k)){
            r=l;
        }
        return r;
        
        
    }
};