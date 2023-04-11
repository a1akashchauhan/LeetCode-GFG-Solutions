class Solution {
public:
    string removeStars(string s) {
        stack<char> a;
        for(auto i: s){
            // a.push
            if(i!='*'){
                a.push(i);
            }
            else{
                a.pop();
            }
        }
        string ans;
        while(!a.empty()){
            char c= a.top();
            ans.push_back(c);
            a.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};