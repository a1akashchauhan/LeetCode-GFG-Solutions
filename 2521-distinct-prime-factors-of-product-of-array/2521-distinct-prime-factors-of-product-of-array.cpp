class Solution {
public:
    void PrimeFactors(int n, vector<int> &v)
{
    int cnt=0;
    if (n % 2 == 0)
    {
        v.push_back(2);
        
        while (n % 2 == 0)
        {

            n = n / 2;
            cnt++;
        }
        
    }

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        if (n % i == 0)
        {
            
            v.push_back(i);
            while (n % i == 0)
            {
                n = n / i;
            }

        }
    }
    if (n > 2)
    {
        v.push_back(n);
    }
}
    
    
    int distinctPrimeFactors(vector<int>& nums) {
        vector<int> v;
        for(int i: nums){
            PrimeFactors(i,v);
        }
        return set<int>(v.begin(), v.end()).size();
        
    }
};