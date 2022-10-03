class Solution {
public:
    int freq=2;
    int tri(int n){
        if(n==0){
            return 0;
        }
        else if(n==1 or n==2){
            
            return 1;
        }
        int a=0,b=1,c=1;
        int window=a+b+c;
        for(int i=3;i<=n;i++){  
            int window=a+b+c;
            a=b;
            b=c;
            c=window;  
            if(i==n){
                return window;
            }
        } 
        return 1;
    }
    int tribonacci(int n) {
        return tri(n);
    }
};