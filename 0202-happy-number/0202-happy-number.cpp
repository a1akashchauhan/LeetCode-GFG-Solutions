class Solution {
public:
    bool isHappy(int n) {
//         vector<bool>b(1e9);
//         b[n]=1;
//         int y=n;
//         while(1){
//             long long k;
//             while(y){
//                 int kk= y%10;
//                 k+=(kk*kk);
//                 y/=10;
//             }
//             y=k;
//             if(k==1){
//                 return 1;
//             }
//             if(b[y]){
//                 return 0;
//             }
//             b[k]=1;
            
//         }
//         return 1;
        if(n>5){
            int sum=0;
            while(n>0){
                int rem=n%10;
                sum=sum+rem*rem;
                n=n/10; 
            }
            return isHappy(sum);
        }
        if(n==1)
            return true;
        else
            return false;
        
        
    }
};