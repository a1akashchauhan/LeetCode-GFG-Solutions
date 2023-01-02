class Solution {
public:
    bool isprime(int n){
    if (n <= 1)return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)return false;
    return true;
}
 void primeFactors(int n,vector<int>&v){
    while (n % 2 == 0){
        v.push_back(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2){
        while (n % i == 0)
        {
            v.push_back(i);
            n = n/i;
        }
    }
    if (n > 2)
        v.push_back(n);
}
    int smallestValue(int n) {
        if(n==0||n==1||n==4)return n;
        int sum;
        while(!isprime(n)){
            sum=0;
            vector<int>v;
            primeFactors(n,v);
            for(int i=0;i<v.size();i++)sum+=v[i];
            n=sum;
        }
        return sum;
    }
};