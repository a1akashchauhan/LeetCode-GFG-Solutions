class Solution {
public:
    bool check(vector<int>& nums, long long mid){
        int n=nums.size();
        long long previous = nums[0];
        if(previous > mid) return false;

        for(int i=1;i<n;i++){
            long long dif = mid - previous;
            previous = nums[i] - dif;
            if(previous > mid){
                return false;
            }
        }
        return true;
    }

    int minimizeArrayValue(vector<int>& nums) {
        long long s=nums[0], e = *max_element(nums.begin(),nums.end());

        while(s<e){
            int mid=(s+e)/2;
            if(check(nums,mid)){
                e=mid;
            }
            else{
                s=mid+1;
            }
        }
        return e;
    }
};