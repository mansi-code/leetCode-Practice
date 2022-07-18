class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
      vector< vector < int> > dp( matrix.size(), vector<int> ( matrix[0].size()));
        int m= matrix.size();
        int n= matrix[0].size();
        int sum=0;
        for(int row=0; row<m; row++){
            dp[row][0]= matrix[row][0];
            sum+= dp[row][0];
        }
        
        for(int col=1; col<n; col++){
            dp[0][col]= matrix[0][col];
             sum+= dp[0][col];
        }
        
       
        for(int row=1; row<m; row++){
            for(int col=1; col<n; col++){
                if(matrix[row][col]==0 )
                    dp[row][col]=0;
                else
                    dp[row][col]= min( dp[row-1][col-1], min( dp[row-1][col], dp[row][col-1])) +1 ;
                sum+= dp[row][col];
            }
        }
        
        return sum;
    }
};