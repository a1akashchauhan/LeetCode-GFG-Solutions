class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n= s.size();
        map<char,char> mp;
        map<char,int>q,w;
        for(int i=0;i<n; i++){
            mp[s[i]]=t[i];
            q[s[i]]++;
            w[t[i]]++;
        }
        string u=s;
        for(int i=0;i<n;i++){
            u[i]= mp[s[i]];
        }
        return u==t and q.size()==w.size();
        
        
//         map<char,int> mmp;
//         for(int i=0;i<n;i++){
//             mp[s[i]]++;
//             mmp[t[i]]++;
//         }
//         vector<int>a;
//         vector<int> b;
//         for(int i=0;i<n;i++){
//             // int k= mp[s[i]];
//             // int l= mmp[t[i]];
//             a.push_back(mp[s[i]]);
//             b.push_back(mmp[t[i]]);
            
//         }
//         return a==b;
    }
};