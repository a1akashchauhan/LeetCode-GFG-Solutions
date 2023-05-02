class Solution {
public:
    int arraySign(vector<int>& nums) {
        int cnt=0;
        for(int i: nums){
            if(i<0) cnt++;
            if(i==0) return 0;
        }
        if(cnt&1){
            return -1;
        }
        else return 1;
    }
};