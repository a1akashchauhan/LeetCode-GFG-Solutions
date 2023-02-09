class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        unordered_map<string,bool> hm;
        for(int i=0;i<ideas.size();i++){      
             hm[ideas[i]] = true;
        }
        
        vector<vector<long long >> dict(26,vector<long long >(26,0)); 
        
        for(int i =0;i<ideas.size();i++){
            
            string word = ideas[i].substr(1);
            
            int in = ideas[i][0]-'a';
            
              for(int j = 0;j<26;j++){
                  char y = ('a'+j);
                  string temp = y + word;
                  
                  if(hm.count(temp)==0){
                      dict[in][j] += 1;
                  }   
              }}
        
        long long count = 0;
        for(int i=0;i<26;i++){
            
              for(int j = 0;j<26;j++){
                  if(i==j)continue;
                  if(dict[i][j]>0){
                      count += (dict[j][i]*dict[i][j]);   
                  }
              }  
        }
        
        return count;

    }
};