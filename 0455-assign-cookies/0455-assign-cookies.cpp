class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int ans=0;
        int i=0;
        int j=0;
        while(i<g.size() and j<s.size()){
            if(g[i]<=s[j]){
                i++;
                ans++;
            }
            j++;
        }
        return ans;
        
    }
};