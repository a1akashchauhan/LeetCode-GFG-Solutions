//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
     long long int MissingNo(vector<vector<int> >& matrix) {

        int n = matrix.size();

        

        int row_z ,col_z;

        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){

                if(matrix[i][j]==0){

                    row_z=  i;col_z = j;

                    break;

                }

            }

        }

        int ind = row_z+1<n?row_z+1:row_z-1;

        

        long long int rowSum = 0;

        long long int zeroRowSum = 0;

        for(int j=0;j<n;j++){

            zeroRowSum += matrix[row_z][j];

            rowSum += matrix[ind][j];

        }

        long long int MissingNo = rowSum - zeroRowSum;

        

        if(MissingNo<=0)return -1;

        matrix[row_z][col_z] = MissingNo;

        

       if(check(matrix,n,rowSum))return MissingNo;

       return -1;

    }

    

private:

    bool check(vector<vector<int> >& matrix, int n,int sum){

        //check each row , col

        for(int i=0;i<n;i++){

            int rows = 0;

            int cols = 0;

            for(int j=0;j<n;j++){

                rows += matrix[i][j];

                cols += matrix[j][i];

            }

            if(rows != sum || cols != sum)return false;

        }

        //check both diagonals

        int r1=0,c1=0;

        int r2=0,c2=n-1;

        int dia2 = 0;

        int dia1 = 0;

        while(r1<n){

            dia1 += matrix[r1++][c1++];

            dia2 += matrix[r2++][c2--];

        }

        if(dia1 != sum || dia2 != sum)return false;

        return true;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		long long int ans = ob.MissingNo(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends