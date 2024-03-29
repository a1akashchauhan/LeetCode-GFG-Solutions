class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        // find all vertices with indegree 0.
        vector<int> ans;
        vector<int>in(n);
        for(int i=0; i<edges.size(); i++){
            in[edges[i][1]]++;
        }
        for(int i=0; i<n; i++){
            if(in[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
        
    }
};