class Solution {
public:
    vector<int> a;
    void first(vector<int> &arr, int t){
        int l=0;
        int r= arr.size()-1;
        int ans=-1;
        while(l<=r){
            int m = l+(r-l)/2;
            if(arr[m]==t){
                r=m-1;
                ans=m;
            }
            if(arr[m]<t){
                l=m+1;
            }
            else if(arr[m]>t){
                r=m-1;
            }
        }
        a.push_back(ans);
        
    }
    void second(vector<int> &arr, int t){
        int l=0;
        int r= arr.size()-1;
        int ans=-1;
        while(l<=r){
            int m = l+(r-l)/2;
            if(arr[m]==t){
                l=m+1;
                ans=m;
            }
            if(arr[m]<t){
                l=m+1;
            }
            else if(arr[m]>t){
                r=m-1;
            }
        }
        a.push_back(ans);
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        first(nums,target);
        second(nums, target);
        return a;
    }
};