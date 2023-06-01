class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> v;
        for(auto i:matrix){
            for(auto j: i){
                v.push_back(j);
            }
        }
        sort(v.begin(), v.end());
        return v[k-1];
        
    }
};