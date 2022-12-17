class Solution {
public:
    int evalRPN(vector<string>& s) {
        stack<int>st;
        int ans=0;
        int n= s.size();
        for(int i=0;i<n;i++){
            if(s[i]=="+" or s[i]=="*" or s[i]=="-" or s[i]=="/"){
                long a= st.top();
                st.pop();
                long b= st.top();
                st.pop();
                if(s[i]=="+") a=a+b;
                if(s[i]=="-") a=b-a;
                if(s[i]=="*") a=a*b;
                if(s[i]=="/") a=b/a;
                st.push(a);
                
            }
            else{
                int a= stoi(s[i]);
                st.push(a);
            }            
        }
        return st.top();
        
    }
};