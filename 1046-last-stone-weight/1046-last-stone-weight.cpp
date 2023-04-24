class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto &i: stones){
            pq.push(i);
        }
        int a,b;
        while(pq.size()>1){
            a  = pq.top();pq.pop();
            b  = pq.top();pq.pop();
            if(a!=b){
                pq.push(abs(a-b));
            }
        }
        if(pq.empty())return 0;
        return pq.top();
    }
};