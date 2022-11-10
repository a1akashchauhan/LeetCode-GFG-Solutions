class Solution {
public:
    string removeDuplicates(string s) {
        string a= "";
        for(auto &e: s){
            if(a.size()!=0){
                if(a.back()==e){
                    a.pop_back();
                }
                else{
                    a.push_back(e);
                }
            }
            else{
                a.push_back(e);
            }
        }
        return a;
    }
};