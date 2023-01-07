// class Solution {
// public:
//     int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//         int gsum=0;
//         int csum=0;
//         for(int i: gas){
//             gsum+=i;
//         }
//         for(int i: cost){
//             csum+=i;
//         }
//         if(csum>gsum){
//             return -1;
//         }
//         vector<int> v;
//         for(int i=0; i<gas.size();i++){
//             v.push_back(gas[i]-cost[i]);
//         }
        
//     }
// };
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int deficient=0;
        int balance=0;
        int start=0;
        for(int i=0;i<n;i++){
            balance+=gas[i]-cost[i];
            if(balance<0){
                deficient+=balance;
                balance=0;
                start=i+1;
            }          
        }
        if(balance+deficient>=0){
            return start;
        }else{
            return -1;
        }
     }
};