class Solution {
public:
    int maxProfit(vector<int>& prices){
        int profit =0;
        int mn= prices[0];
        int n= prices.size();
        for(int i: prices){
            profit= max(profit, i-mn);
            mn= min(mn,i);
        }
        return profit;
    }
    
};