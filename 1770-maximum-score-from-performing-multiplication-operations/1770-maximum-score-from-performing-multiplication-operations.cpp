class Solution {
public:
    vector<vector<int>> dp;
    
    int solve(int i, int n, int j, vector<int> &nums, vector<int> &M){
        
        if (j == M.size()) return 0;
        if (dp[i][j] != INT_MIN) return dp[i][j];
        
        // Left Side
        int left = solve(i + 1, n, j + 1, nums, M) + (nums[i] * M[j]);
        
        // Right Side
        int right = solve(i, n, j + 1, nums, M) + (nums[(n - 1) - (j - i)] * M[j]);
        
        return dp[i][j] = max(left, right);
    }
    
    int maximumScore(vector<int>& nums, vector<int>& M) {   
        int n = nums.size(), m = M.size();
        dp.resize(m + 1, vector<int>(m + 1, INT_MIN));
        return solve(0, n, 0, nums, M);
    }
    
    
//     int dp[1000][1000];

// int answer_dp(vector<int> &nums, vector<int> &multi, int i, int l, int r){

// 	if(i==multi.size())
// 		return 0;

// 	if(dp[l][i]!=-1)
// 		return dp[l][i];

// 	int first = multi[i]*nums[l] + answer_dp(nums, multi, i+1, l+1, r);
// 	int last = multi[i]*nums[r] + answer_dp(nums, multi, i+1, l, r-1);

// 	dp[l][i] = max(first, last);

// 	return dp[l][i];
// }
// int maximumScore(vector<int>& nums, vector<int>& multi) {

// 	memset(dp, -1, sizeof(dp));

// 	return answer_dp(nums, multi, 0, 0, nums.size()-1);
// }
};