class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int k= n*n;
        int j=1;
        int top=0;
        int down= n-1;
        int left=0;
        int right=n-1;
        int d=0;
        vector<vector<int>> ans(n,vector<int>(n,0));
        while(top<=down and left<=right){
            if(d==0){
                for(int i=left;i<=right;i++){
                    ans[top][i]=j;
                    j++;
                }
                top++;
                d=1;
            }
            else if(d==1){
                for(int i=top;i<=down;i++){
                    ans[i][right]=j;
                    j++;
                }
                right--;
                d=2;
            }
            else if(d==2){
                for(int i= right;i>=left;i--){
                    ans[down][i]=j;
                    j++;
                }
                down--;
                d=3;
            }
            else if(d==3){
                for(int i= down; i>=top;i--){
                    ans[i][left]=j;
                    j++;
                }
                left++;
                d=0;
            }
            
        }
        return ans;
    }
};