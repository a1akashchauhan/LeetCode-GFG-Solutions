class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mp;
        bool flag = true;
        vector<int>v;
        for(int i : arr){
            mp[i]++;
        }
        for(auto i: mp){
            v.push_back(i.second);     
        }
        sort(v.begin(), v.end());
        for(int i=0;i<v.size()-1; i++){
            if(v[i]== v[i+1]){
                flag= false;
                break;
            }
        }
        return flag;
    }    
};