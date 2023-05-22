bool compare(int a, int b){
    string s1= to_string(a);
    string s2= to_string(b);

    return s1+s2>s2+s1;
}

class Solution {
public:
    

    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(), compare);
        string s="";
        for(auto &n : nums) s+=to_string(n);
        if(nums[0]==0) return "0";
        return s;
    }
};