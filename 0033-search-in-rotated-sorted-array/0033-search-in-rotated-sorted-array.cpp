class Solution {
public:
    int search(vector<int>& arr, int t) {
        int ans=-1;
        int l=0;
        int r=arr.size()-1;
        while(l<=r){
            int m= (l+r)/2;
            if(arr[m]==t){
                ans=m;
                break;
            }
            if(arr[m]>=arr[l]){
                if(t<arr[m] and t>=arr[l]){
                    r=m-1;
                }
                else{
                    l=m+1;
                }
            }
            else if(arr[m] <= arr[r]){
                if(t > arr[m] and t<=arr[r]){
                    l=m+1;
                }
                else{
                    r=m-1;
                }
            }
            
        }
        return ans;
    }
};