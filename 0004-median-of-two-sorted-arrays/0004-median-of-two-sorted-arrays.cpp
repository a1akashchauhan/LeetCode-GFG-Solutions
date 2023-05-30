class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        
        int n= a.size();
    int m= b.size();
        
        if(n>m){
            return findMedianSortedArrays(b,a);
        }
        // if(m<n){
        //     swap(a,b);
        //     swap(m,n);
        // }
    int low=0;
    int high= n;
    while(low<=high){
        int mid= low+(high-low)/2;
        int parta= mid;
        int partb= (n+m+1)/2 - parta;
        int aleft, aright, bleft, bright;
        
        if(parta==0){
            aleft=INT_MIN;
        }
        else{
            aleft= a[parta-1];
        }
        if(parta==n){
            aright=INT_MAX;
        }
        else{
            aright= a[parta];
        }
        
        
        if(partb==0){
            bleft=INT_MIN;
        }
        else{
            bleft= b[partb-1];
        }
        if(partb==m){
            bright=INT_MAX;
        }
        else{
            bright= b[partb];
        }
        
        if(aleft > bright){
            high= parta-1;
        }
        else if( bleft > aright ){
            low= parta+1;
        }
        
        
        else if(aleft <= bright  and bleft<= aright){
            
            if((n+m)%2==0){
                double ans= ( max(aleft,bleft)+min(aright, bright))/2.0;
                return ans;
            }
            else{
                double ans= max(aleft, bleft);
                return ans;
                
            }
            
        }
                
    }
        
     return -1.0;   
    }
};