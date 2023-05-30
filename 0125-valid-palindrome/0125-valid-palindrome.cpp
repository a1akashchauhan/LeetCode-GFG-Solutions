class Solution {
public:
    bool isPalindrome(string A) {
        string s;
    // transform(A.begin(), A.end(), A.begin(), tolower);
    for(auto i: A){
        if(!isalnum(i)){
            continue;
        }
        i=tolower(i);
        
        s.push_back(i);
    }
    int n= s.size();
    for(int i=0; i<(n+1)/2; i++){
        if(s[i]!=s[n-i-1]){
            return 0;
        }
    }
    return 1;
    }
    
};