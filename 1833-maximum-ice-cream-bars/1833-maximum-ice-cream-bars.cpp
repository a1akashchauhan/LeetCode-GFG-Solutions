class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin() , costs.end());
        int ans = 0 , n = costs.size();
        for(int i = 0 ; i < n ; i++){
            if(costs[i] <= coins){
                ans++;
                coins -= costs[i];
            }
        }
        return ans;
    }
};