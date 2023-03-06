class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int j=0;
        for(int i=1; i<2002; i++){
            if(j< arr.size() and i==arr[j]){
                j++;
            }
            else{
                k--;
                if(k==0){
                    return i;
                }
            }
        }
        return 0;
        
    }
};