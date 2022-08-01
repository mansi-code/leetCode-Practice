class Solution {
public:
    bool isValid(vector<vector<bool>> &grid, int i, int j ){
        if(i<0 || i>= grid.size() || j<0 || j>= grid[0].size())
            return false;
        return true;
    }
    int traverse(vector<vector<bool>> &grid, int i, int j ){
        
        if(i==grid.size()-1 && j== grid[0].size()-1)
            return 1;
        
        if(grid[i][j])
            return 0;
        
        grid[i][j]=1;
        int choice1=0, choice2=0;
        if(isValid(grid, i+1, j))
             choice1= traverse(grid, i+1, j);
        if(isValid(grid, i, j+1))
             choice2= traverse(grid, i, j+1);
        
        int ans= choice1+ choice2;
        grid[i][j]=0;
        return  ans;
        
    }
    int uniquePaths(int m, int n) {
        vector< vector<int>> grid(m , vector<int> (n, 0));
        grid[m-1][n-1]= 1;
        //fill the last column
        for(int row= m-1; row>=0; row--){
            grid[row][n-1]=1;
        }
        
        //fill the last row
        for(int col= n-1; col>=0; col--){
            grid[m-1][col]=1;
        }
        
        
        for(int row= m-2; row>=0; row--){
            for(int col= n-2; col>=0; col--){
                grid[row][col]= grid[row+1][col] + grid[row][col+1];
            }
        }
        // for(int i=0; i<m; i++){
        //     for(int j=0; j<n; j++){
        //         cout<<grid[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return grid[0][0];
    }
};