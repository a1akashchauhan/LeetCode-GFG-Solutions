class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        priority_queue<pair<int,int>,vector<pair<int, int>>, greater<pair<int,int>>>pq;
        int n = arr.size();
        for(int i=0;i<n;i++){
            int diff=abs(arr[i]-x);
            pq.push({diff, arr[i]});
        }
        
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(), ans.end());
        return ans;
        
        
    }
};