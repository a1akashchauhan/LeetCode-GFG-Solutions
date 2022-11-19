class NumMatrix {
public:
    vector<vector<int>> mat ; 
    NumMatrix(vector<vector<int>>& matrix) {
        
        int n = matrix.size() ;
        int m = matrix[0].size() ;
        
        mat = vector<vector<int>> ( n, vector<int> (m,0) ) ;
        
        mat[0][0] = matrix[0][0] ;
        
        for(int i = 1 ; i < m ; i++)
        {
            mat[0][i] = matrix[0][i] + mat[0][i-1] ;
        }
        for(int i = 1 ;  i< n ; i++)
        {
            mat[i][0] = matrix[i][0] + mat[i-1][0] ;
        }
        
        for(int i = 1 ; i < n ; i++) 
        {
            for(int j = 1 ; j < m ; j++)
            {
                mat[i][j] = mat[i-1][j] + mat[i][j-1] + matrix[i][j] - mat[i-1][j-1] ;
            }
        }
        
        
        
        
    }
    
    int sumRegion(int x1, int y1, int x2, int y2) {
        
        int a = 0 , b = 0 , c = 0 , d = 0 ;
        
        a = mat[x2][y2] ;
        if( x1 -1 >= 0 && y1-1 >= 0 ) 
        b = mat[x1-1][y1-1] ;
        
        if( y1-1 >= 0 )
        c = mat[x2][y1-1] ;
        
        if( x1-1 >= 0 )
        d = mat[x1-1][y2]  ;
        
        return a + b - ( c + d ) ;
        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */