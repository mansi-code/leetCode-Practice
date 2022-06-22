class Solution {
public:
    int minCost(vector<int>& cost, int n, int* dp){
        
        if(n==0||n==1)
            return 0;
        if(dp[n]!=-1)
            return dp[n];
        
        int choice1= minCost(cost, n-1,dp)+ cost[n-1];
        int choice2= minCost(cost, n-2,dp)+ cost[n-2];
        
        int answer=  min(choice1, choice2);
        dp[n]= answer;
        return answer;
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        int n= cost.size();
        int* dp= new int[n+1];
        for(int i=0; i<=n; i++){
            dp[i]=-1;
        }
        return minCost(cost,n,dp);// cost to reach n
    }
};