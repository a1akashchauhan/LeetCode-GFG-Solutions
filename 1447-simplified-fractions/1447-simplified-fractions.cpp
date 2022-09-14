class Solution {
public:
    
    vector<string> simplifiedFractions(int n) {
        vector<string> ans;
        string temp;
        for(int i=1; i<n;i++){
            for(int j=i+1;j<=n;j++){
                if(__gcd(i,j)==1 and i!=1){
                    temp= to_string(i)+"/"+to_string(j);
                    ans.push_back(temp);
                }
                else if(i==1){
                    temp= to_string(i)+"/"+to_string(j);
                    ans.push_back(temp);
                }
                else{
                    continue;
                }
                
                
            }
        }
        return ans;
    }
};