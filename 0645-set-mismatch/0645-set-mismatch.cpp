class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int XOR = 0, duplicatedNum = 0, missingNum = nums.size();
        
        for (int num : set<int>(nums.begin(), nums.end()))
            XOR ^= num;
        
        for (size_t i = 0; i < nums.size(); i++)
            duplicatedNum ^= nums[i]; 
            
        for (size_t i = 1; i < nums.size(); i++)
            missingNum ^= i;
        
        return {duplicatedNum ^ XOR, missingNum ^ XOR};
    }
    
    
};