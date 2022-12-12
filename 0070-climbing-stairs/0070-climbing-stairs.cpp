class Solution {
public:
    int v[47];
    int climbStairs(int n) {
        v[0]=1;
        v[1]=1;
        for(int i=2;i<=n;i++){
            v[i]= v[i-1]+v[i-2];
            if(i==n){
                return v[i];
            }
        }
        return 1;
        
        
    }
};