class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int z=0;
        int one =0;
        for(auto i: s){
            if(i=='1'){
                one++;
            }
            else{
                z=min(++z, one);
            }
        }
        return z;
        
    }
};