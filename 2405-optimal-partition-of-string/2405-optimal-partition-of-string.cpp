class Solution {
public:
    int partitionString(string s) {
        map<char, int> mp;
        int ans=1;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(mp[c]==0){
                mp[c]++;
                continue;
            }
            else{
                ans++;
                mp.clear();
                mp[c]++;
            }     
        }
        return ans;
    }
};