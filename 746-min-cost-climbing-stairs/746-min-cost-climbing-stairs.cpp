class Solution {
public:


    
    int minCostClimbingStairs(vector<int>& cost) {
        int n= cost.size();
        
        //int* dp= new int[n+1];
        int choice1=0;
        int choice2=0;
        int curr=0;
        for(int i=2; i<=n; i++){
            curr= min(choice1+ cost[i-1], choice2+ cost[i-2]);
            choice2=choice1;
            choice1= curr;
            //dp[i]= min(dp[i-1]+cost[i-1], dp[i-2]+cost[i-2]);
        }
        return curr;
    }
};