class Solution {
public:
//     int fun(vector<int>&v, int n, int i, vector<vector<int>>&dp){
//         if(i>=n-1){
//             return 0;
//         }
//         int forward= 1e9;
//         int backward= 1e9;
//         int jump= 1e9;
//         if(i < n-1){
//             forward=1+ fun(v, n, i+1, dp);
//         }
//         if(i>1){
//             backward=1+ fun(v,n,i-1, dp);
//         }
//         int k= v[i];
//         for(int j= n-1; j>i; j--){
//             if(v[j]==v[i]){
//                 jump= 1+ fun(v,n,j,dp);
//                 break;
//             }
//         }
//         return min({forward,backward, jump});
//     }
    
    
    
    int minJumps(vector<int>& arr) {
        // int n= arr.size();
        // vector<vector<int>> dp(n+1, vector<int>(3, 0) );
        // return fun(arr, n, 0, dp);
        unordered_map<int,vector<int>> mp;
        
       for(int i=0;i<arr.size();i++){
           mp[arr[i]].push_back(i);
       }
       
        queue<int> q;
        q.push(0);
        
        vector<int> dis(arr.size(),1e9);
        
        dis[0]=0;
        
        while(!q.empty()){
            
            int index=q.front();
            q.pop();
            
            if(index==arr.size() - 1) return dis[index];
            
            vector<int> &list=mp[arr[index]];
            list.push_back(index - 1);
            list.push_back(index + 1);
            
            
            for(auto  &x : list){
                
                if(x>=0 and x<arr.size() and dis[x]>dis[index] + 1){
                    dis[x] = dis[index] + 1;
                    q.push(x);
                }
            }
            list.clear();
        }
        
        return -1;
        
    }
};