class Solution {
public:
    int mySqrt(int x) {
        if(x==1){
            return 1;
        }
        long long l=0;
        long long r=x/2;
        while(l+1<r){
            long long m= l+(r-l+1)/2;
            long long k= m*m;            
            if(k<=x){
                l=m;
            }
            else{
                r=m;
            }
        }
        if((r*r)<=x){
            return r;
        }
        return l;  
    }
};