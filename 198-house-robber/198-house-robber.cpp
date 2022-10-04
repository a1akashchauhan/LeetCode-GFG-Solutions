class Solution {
public:
    int fun(vector<int> &nums,vector<int> &v, int i){
        if(i>=v.size()){
            return 0;
        }
        if(v[i]!= -1){
            return v[i];
        }
        return v[i]= max(fun(nums, v, i+1), nums[i]+ fun(nums, v, i+2));
    }
    
    
    int rob(vector<int>& nums){
        int n= nums.size();
        vector<int> v(n,-1);
        return fun(nums,v,0);
    }
        
};