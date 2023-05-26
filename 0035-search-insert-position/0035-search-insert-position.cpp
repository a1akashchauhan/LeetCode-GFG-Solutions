class Solution {
public:
    int searchInsert(vector<int>& v, int target) {
        // return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int t=target;
        int n= v.size();
        int l=0;
        int r=n-1;
        while(l<=r){
            int mid= l+(r-l)/2;
            if(v[mid]==t){
                return mid;
            }
            if(v[mid]<t){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return l;
        
    }
};