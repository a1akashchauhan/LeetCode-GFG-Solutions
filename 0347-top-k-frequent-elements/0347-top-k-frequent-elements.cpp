class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> ans;
        unordered_map<int,int>mp;
        for(int i: nums){
            mp[i]++;
        }
        priority_queue<int> pq;
        for(auto i: mp){
            pq.push(i.second);
            // cout<<i.S;
        }
        vector<pair<int,int>> vp;
        // unordered_map<int,int> mpp;
        for(auto i: mp){
            // mpp[i.second]=i.first;
            vp.push_back({i.second, i.first});

        }
        sort(vp.begin(), vp.end());
        reverse(vp.begin(), vp.end());
        int i=0;
        while(k--){
            ans.push_back(vp[i].second);
            i++;
            pq.pop();
        }
        return ans;
        
    }
};