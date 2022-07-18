class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
     vector< vector < int> > dp( matrix.size(), vector<int> ( matrix[0].size()));
        int m= matrix.size();
        int n= matrix[0].size();
        int max=0;
        for(int row=0; row<m; row++){
            dp[row][0]= matrix[row][0]-'0';
        
           if(max<dp[row][0])
               max=dp[row][0];
        }
        
        for(int col=1; col<n; col++){
            dp[0][col]= matrix[0][col]-'0';
             if(max<dp[0][col])
               max=dp[0][col];
        }
        
       
        for(int row=1; row<m; row++){
            for(int col=1; col<n; col++){
                if(matrix[row][col]-'0'==0 )
                    dp[row][col]=0;
                else
                    dp[row][col]= min( dp[row-1][col-1], min( dp[row-1][col], dp[row][col-1])) +1 ;
               
                if(max<dp[row][col])
                max=dp[row][col];
            }
          
        }
        
       
        return max*max;
    }
};