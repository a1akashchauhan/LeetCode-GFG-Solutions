class Solution {
    
     int solve(  vector< vector<int> > &v , int idx , vector<int> &dp)
     {
          if(idx>= v.size() ) return 0;
         
          int i = idx ;
         
          if(dp[i]!= -1) return dp[i] ;
         
          vector<int> c = {v[idx][1] , 0 , 0 } ;
         
          int newIdx = lower_bound( begin(v) , end(v) , c ) - begin(v) ;
         
          int op1 = v[idx][2] + solve( v , newIdx , dp) ;
          int op2 = solve(v , idx+1 , dp) ;
         
          return dp[idx] = max(op1 , op2 ) ;
     }
    
public:
    int jobScheduling(vector<int>& s, vector<int>& e, vector<int>& profit) {
        
          int n = profit.size() ;
        
          vector< vector<int> > v ;
        
          for(int i=0 ; i<n ;i++)
          {
              v.push_back({ s[i] , e[i] , profit[i]}) ;
          }
        
          sort(v.begin() , v.end() ) ;
        
          vector<int> dp(n+5 , -1 ) ;
        
          return solve(v , 0 , dp ) ;
        
    }
};