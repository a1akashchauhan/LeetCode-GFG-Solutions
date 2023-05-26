class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        // int rows = sizeof(arr) / sizeof(arr[0]); // returns rows
        // int col = sizeof(arr[0]) / sizeof(int);
        int row=arr.size();
        int col=arr[0].size();
        int i=0;
        int j= col-1;
        // bool flag= false;
        int k;
        while(i< row && j>=0){
            k= arr[i][j];
            if(k== target) return true;
            if(k>target){
                j--;
            }
            else{
                i++;
            }
        }
        
        // for(int i=0; i<rows; i++){
        //     if(arr[0][i]>target) break;
        // }
        // for(int j=0; j<col;j++){
        //     if(arr[i][j]==target){
        //         flag= true;
        //         break;
        //     }
        // }
        
        return false;
    }
};