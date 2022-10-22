class Solution {
public:
    
    int fun(int n, vector<int> nums, vector<int> &dp){
        if(n==0){
            return nums[0];
        }
        if(n<0){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int pick= nums[n]+ fun(n-2, nums, dp);
        int notpick;
        
            notpick= fun(n-1, nums, dp);
        
        
        return dp[n]= max(pick, notpick);
        
    }
    
    int rob(vector<int>& nums) {
        int n= nums.size();
        vector<int> v(n+1,-1);
        vector<int> a;
        vector<int> b;
        if(n==1){
            return nums[0];
        }
        for(int i=0; i<n; i++){
            if(i!=0){
                a.push_back(nums[i]);
            }
            if(i!=(n-1)){
                b.push_back(nums[i]);
            }
        }
        vector<int> w=v;
        int aa= fun(n-2,a,v);
        int bb= fun(n-2,b,w);
        return max(aa,bb);
            
        
    }
};