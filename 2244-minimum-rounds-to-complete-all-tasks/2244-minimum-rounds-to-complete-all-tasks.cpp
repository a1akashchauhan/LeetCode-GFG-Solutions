class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int> mp;
        for(int i: tasks){
            mp[i]++;
        }
        int ans=0;
        for(auto i: mp){
            int k=  i.second;
            if(k==2){
                ans+=1;
            }
            else if(k==1){
                return -1;
            }
            else if(k%3==0){
                ans+=(k/3);
            }
            else if((k-2)%3==0){
                ans+=(k/3);
                ans+=1;
            }
            else if((k-4)%3==0){
                ans+=(k/3);
                ans+=1;
            }
            else{
                return -1;
            }
        }
        return ans;
    }
};