class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans;
        int n= s.size();
        int i=0;
        while(i<n){
            while(s[i]==' ' and i<n){
                i++;
            }
            if(i>=n){
                break;
            }
            
                string g;
                while(s[i]!=' ' and i<n){
                    g.push_back(s[i]);
                    i++;
                }
                ans.push_back(g);
                i++;
            
        }
        string res= "";
        reverse(ans.begin(), ans.end());
        for(auto i: ans){
            res+=i;
            res+=" ";
        }
        // int k= res.size();
        // k=k-1;
        // while(res[k]==' ' and k>=0){
        //     res.pop_back();
        //     k--;
        // }
        res.pop_back();
        string w="";
        int j=0;
        
        // int y=0;
        // while(res[y]==' ' and y<k){
        //     res.pop_front();
        //     y++;
        // }
        // res.pop_back();
        return res;
        
    }
};