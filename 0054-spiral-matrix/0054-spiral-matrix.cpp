class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& A) {
        
        
        
    int T,B,L,R,dir;
    T=0;
    B=A.size()-1;
    L=0;
    R=A[0].size()-1;
    dir=0;
    int i;
    vector<int> ans;
    
    while(T<=B && L<=R)
    {
        if(dir==0)
        {
            for(i=L;i<=R;i++)
                ans.push_back(A[T][i]);
            T++;
        }
        else if(dir==1)
        {
            for(i=T;i<=B;i++)
                ans.push_back(A[i][R]);
            R--;
        }
        else if(dir==2)
        {
            for(i=R;i>=L;i--)
                ans.push_back(A[B][i]);
            B--;
        }
        else if(dir==3)
        {
            for(i=B;i>=T;i--)
                ans.push_back(A[i][L]);
            L++;
        }
        dir=(dir+1)%4;
    }
    return ans;
//         int d=0;
//         vector<int> ans;
//         int n= matrix.size();
//         int m= matrix[0].size();
//         if(n==0){
//             return ans;
//         }
//         int top=0;
//         int down= n-1;
//         int right= m-1;
//         int left= 0;
//         while(left<=right && top<=down){
//             if(d==0){
//                 for(int i=left; i<=right;i++){
//                     ans.push_back(matrix[top][i]);
//                 }
//                 // d=1;
//                 top++;
                
//             }
//             else if(d==1){
//                 for(int i=top;i<=down;i++){
//                     ans.push_back(matrix[i][right]);
//                 }
//                 // d=2;
//                 right--;
                
//             }
//             else if(d==2){
//                 for(int i= right;i>=left;i--){
//                     ans.push_back(matrix[down][i]);
//                     // d=3;/
//                     down--;
                    
//                 }
//             }
//             else if(d==3){
//                 for(int i=down;i>=top;i--){
//                     ans.push_back(matrix[i][left]);
//                 }
//                 // d=0;
//                 left++;
                
//             }
//             d=(d+1)%4;
//         }
//         return ans;
        
    }
}; 