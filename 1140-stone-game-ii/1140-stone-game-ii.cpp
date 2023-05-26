class Solution {
public:
    int dp[2][202][101];
    
    int solve(int x,vector<int>& piles,int m,bool pl)
    {
        int n=piles.size(),i,j;
        
        if(x>=n){return 0;}
        int ans=0;
        int cnt=0;
        
        if(dp[pl][m][x]!=-1){return dp[pl][m][x]; }
        
        //alice
        if(pl==0){
            
        for(i=1;i<=2*m;i++)
        {
            if(x+i-1<n)
        {
            cnt+=piles[x+i-1];
        }
            
            // cout<<2*m<<endl;
           // cout<<i<<x<<endl;
            ans= max(ans,cnt+solve(x+i,piles,max(i,m),!pl));
        }
            
        }
        
        //for bob or alice min
        
        else{
            ans=INT_MAX;
              for(i=1;i<=2*m;i++)
        {
        
            ans= min(ans,solve(x+i,piles,max(i,m),!pl));
        }
            
        }
        
        return dp[pl][m][x]=ans;
        
        
    }
    
    int stoneGameII(vector<int>& piles) {
        
        memset(dp,-1,sizeof(dp));
        
        return solve(0,piles,1,0);
    }
};