class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n= rocks.size();
        for(int i=0;i<n;i++){
            capacity[i]= capacity[i]-rocks[i];
            
        }
        sort(capacity.begin(), capacity.end());
        int k= additionalRocks;
        int ans=0;
        int i=0;
        while(i<n and k>= capacity[i] ){
            k-=capacity[i];
            ans++;
            i++;
        }
        return ans;
        
    }
};