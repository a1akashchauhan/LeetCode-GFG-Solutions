class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i:nums){
            mp[i]++;
        }
        vector<int> ans;
        int n= nums.size();
        n/=3;
        for(auto i: mp){
            if(i.second>n){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};