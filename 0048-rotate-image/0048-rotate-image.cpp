class Solution {
public:
    
void transpose(vector<vector<int>>&v){
    int n= v.size();
    int j=0;
    for(int i=1; i<n; i++){
        for(int k=i; k<n; k++){
            swap(v[j][k],v[k][j]);
        }
        j++;
    }

}
    
    
    void rotate(vector<vector<int>>& v) {
        transpose(v);
        for(auto &i: v){
            reverse(i.begin(), i.end());
        }
        // return matrix;
        
    }
};