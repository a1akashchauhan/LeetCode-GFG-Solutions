class Solution {
public:
    int firstMissingPositive(vector<int>& v) {
        int n= v.size();
        for(int i=0; i<n; i++){
            if(v[i]<=0){
                v[i]=n+1;
            }
        }   
        for(int i=0; i<n; i++){
            if(abs(v[i])<=n and abs(v[i])>0){
                v[abs(v[i])-1]= - abs(v[abs(v[i])-1]);
            }
        }
        // print(v);
        for(int i=0; i<n; i++){
            if(v[i]>0){
                return i+1;
            }
        }
        return n+1;
        
    }
};