class Solution {
public:
    vector<int> x= {1,-1,0,0};
    vector<int> y= {0,0,1,-1};
    int islandPerimeter(vector<vector<int>>& grid) {
        int n= grid.size();
        int ans=0;
        int m= grid[0].size();
        for(int i=0 ;i<n;i++){
            for(int j=0; j<m;j++){
                if(grid[i][j]==1){
                    ans+=4;                   
                    for(int k= 0; k<4;k++){
                    int nx= i+x[k];
                    int ny= j+y[k];
                    if(nx>=0 and ny>=0 and nx<n and ny<m){
                        if(grid[nx][ny]==1){
                            ans--;
                        }
                    }
                    
                    }
                }
                
            }
        }
        return ans;
    }
};