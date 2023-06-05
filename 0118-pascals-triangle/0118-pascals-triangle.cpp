class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
    ans.push_back({1});
    if(n==1){
      return ans;
    }
    ans.push_back({1,1});
    if(n==2){
      return ans;
    }
    vector<int> prev={1,1};
    for(int i=2; i<n; i++){
      vector<int> temp;
      temp.push_back(1);
      for(int j=1;j<i;j++){
        int k= prev[j-1];

        int kk= prev[j];
        temp.push_back(k+kk);
      }
      temp.push_back(1);
      prev=temp;
      ans.push_back(temp);

    }
    return ans;
    }
};