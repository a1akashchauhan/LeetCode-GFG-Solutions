class Solution {
public:
    int  fun(vector<int>&nums, vector<int>&v, int n){
        if(n==0){
            return  nums[0];
        }
        else if(n==1){
            return max(nums[0], nums[1]);
        }
        if(v[n]!=-1){
            return v[n] ;
        }
        else{
            return v[n]= max(fun(nums, v, n-1), nums[n]+ fun(nums, v, n-2));
        }
    }
    int rob(vector<int>& nums){
        int n= nums.size();
        vector<int> v(n,-1);
        return fun(nums,v,n-1);
        // return v[n-1];
    }
        
};