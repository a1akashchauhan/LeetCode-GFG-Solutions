class Solution {
    int countSmallerOrEqual(int mid, vector<vector<int>>& matrix){
        int n=matrix.size();
        int i=n-1, j=0, count=0;
        while(i>=0&&j<n){
            if(matrix[i][j] <=mid) count+= (i+1), j++;
            else i--;
        }
        return count;
    }
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        long lower=INT_MIN, upper=INT_MAX;
        while(lower < upper){
            long mid = lower+((upper-lower)>>1);
            int count = countSmallerOrEqual(mid,matrix);
            if(count < k) lower = mid +1;
            else upper = mid;
        }
        return lower;
    }
};