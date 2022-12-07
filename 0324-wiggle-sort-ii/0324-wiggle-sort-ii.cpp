class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int>v=nums;
        vector<int> temp = v;
            sort(temp.begin(), temp.end());
        
            int i = (temp.size()-1)/2;
            int j = temp.size()-1;
            int k = 0;
            while(k < v.size())
            {
                if(k&1)
                    v[k++] = temp[j--];
                else
                    v[k++] = temp[i--];
            }
        nums =v;
    }
};