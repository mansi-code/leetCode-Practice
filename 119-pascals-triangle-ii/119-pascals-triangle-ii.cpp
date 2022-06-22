class Solution {
public:
    vector<int> getRow(int rowIndex) {
            vector<int> prev(1,1);
            
            for(int i=1; i<=rowIndex; i++){
                vector<int> curr(prev.size()+1, 1);
                for(int j=1; j<=i; j++){
                    int diagonal= prev[j-1];
                    
                    int above= 0;
                    if(j<i)
                        above= prev[j];
                    curr[j]= diagonal+ above;
                }
                prev=curr;
                
            }
            
        return prev;
    }
};
/*
for(int i=0; i<=rowIndex; i++){
           vector<int> curr(prev.size()+1,1) ;
            for(int j=1;j<i; j++){
                row[j]= result[i-1][j-1]+ result[i-1][j];
            }
            result.push_back(row);
        }
        return result[rowIndex];
        */