class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans= nums[0];
        int sum=0;
        for(int i: nums){
            sum= sum +i;
            ans= max(ans, sum);
            if(sum<0){
                sum=0;
            }   
        }
        
        return ans;
    }
};