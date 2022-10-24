class Solution {
public:
    int maxLength(vector<string> &arr) {
        vector<int> nums;
        for(string &i: arr) {
            int num = 0;
            bool flag = true;
            
            for(char &j: i) {
                int x = 1 << (j - 'a');
                
                if(num & x)
                    flag = false;
                num |= x;
            }
            
            if(flag)
                nums.push_back(num);
        }
        
        return solve(nums, 0, 0);
    }
    
private:
    int solve(vector<int> &nums, int k,  int i) {
        int res = __builtin_popcount(k);
        for(int j = i; j < nums.size(); j++)
            if((k & nums[j]) == 0)
                res = max(res, solve(nums, k | nums[j], j + 1));
        return res;
    }
};